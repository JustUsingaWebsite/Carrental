#include <database.h>

void database::initMYSQL() {
    mydb = QSqlDatabase::addDatabase("QMYSQL");
    //setting connection credentials
    mydb.setHostName("localhost");
    mydb.setUserName("root");
    mydb.setPassword("");
    mydb.setDatabaseName("car_rental_system");

    //exception handling
    try
    {
        if(mydb.open())
        {
            qDebug() << "Successfully connected to database!";

        }
        else
        // Lets the program know that it didnt connect to the server
        {
            QString error = mydb.lastError().text();
            throw error.toStdString().c_str();
        }


    }
    catch(const char * message)  //catches the exception as a char pointer
    {
        QMessageBox messagebox;
        messagebox.about(NULL,"Connection to database failed!",message);
        qFatal("Connection to database failed!");
    }
}

void database::initSQLITE(){
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName(QCoreApplication::applicationDirPath() + "/FinalData.db");

    if (mydb.open()){
        qDebug() << "rasin";
    }
}


database::database() {

    initSQLITE();
}

database::~database(){
    //mydb.close();
    //QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);

    mydb.close();
    QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );  //remove database
    return;
}

QStringList database::verifyUserSQLITE(QString name, QString pass){
    QStringList userInfo;

    // Prepare the SQL query to verify the user
    QSqlQuery query;
    query.prepare("SELECT users.user_id, users.username, users.name, users.password, roles.role_name "
                  "FROM users "
                  "INNER JOIN roles ON users.role_id = roles.role_id "
                  "WHERE users.username = :username AND users.password = :password");
    query.bindValue(":username", name);
    query.bindValue(":password", pass);

    if (!query.exec()) {
        qDebug() << "Error verifying user:" << query.lastError().text();
        return userInfo;
    }

    if (query.next()) {

        QString userId = query.value(0).toString();
        QString username = query.value(1).toString();
        QString fullName = query.value(2).toString();
        QString password = query.value(3).toString();
        QString roleName = query.value(4).toString();

        // Add user information to the QStringList
        userInfo << userId << fullName << password << username << roleName;
    }

    return userInfo;
}

QStringList database::verifyUserMySQL(QString name, QString pass){
    // query the database
   /* if (name != "" && pass != ""){return true;}
    return false; */
    QSqlQuery qry;
    qry.prepare( "SELECT users.user_id, users.name, users.password, "
                "users.username, roles.role_name, users.role_id "
                "FROM users LEFT JOIN roles ON users.role_id = roles.role_id "
                "WHERE username = :uname AND password = :pword" );
    qry.bindValue(":uname", name);
    qry.bindValue(":pword", pass);

    if( !qry.exec() ){
        qDebug() <<"Login query failed "<< mydb.lastError();
    }

    QStringList result;

    if(qry.size() == 1){
        while( qry.next() ){
            result << qry.value("user_id").toString();
            result << qry.value("name").toString();
            result << qry.value("password").toString();
            result << qry.value("username").toString();
            result << qry.value("role_name").toString();
            result << qry.value("role_id").toString();
        }

    }
    return result;
}


std::vector<std::map<QString, QVariant>> database::getInventory() {
    std::vector<std::map<QString, QVariant>> inventory;

    QSqlQuery query(mydb);
    query.prepare("SELECT c.*, i.Availability_Status FROM cars c LEFT JOIN inventory i ON c.CarID = i.CarID");
    if (!query.exec()) {
        qDebug() << "Error loading inventory:" << query.lastError().text();
        return inventory;
    }

    while (query.next()) {
        std::map<QString, QVariant> carData;
        carData["CarID"] = query.value("CarID");
        carData["Manufacturer"] = query.value("Manufacturer");
        carData["Model"] = query.value("Model");
        carData["Year"] = query.value("Year");
        carData["Color"] = query.value("Color");
        carData["Rental_Price"] = query.value("Rental_price");
        carData["Availability_Status"] = query.value("Availability_Status");
        inventory.push_back(carData);
    }

    return inventory;
}

std::map<QString, QVariant> database::getUserRentedCar(int userId) {
    std::map<QString, QVariant> carData;

    QSqlQuery query(mydb);
    query.prepare("SELECT c.*, i.Availability_Status, r.Start_Date, r.Return_Date, r.Total_Price, r.Rental_Status FROM rentals r "
                  "INNER JOIN cars c ON r.CarID = c.CarID "
                  "INNER JOIN inventory i ON r.CarID = i.CarID "
                  "WHERE r.CustomerID = :userId AND r.Rental_Status = 'active'");
    query.bindValue(":userId", userId);
    if (!query.exec()) {
        qDebug() << "Error checking user's rented car:" << query.lastError().text();
        return carData;
    }

    if (query.next()) {
        carData["CarID"] = query.value("CarID");
        carData["Manufacturer"] = query.value("Manufacturer");
        carData["Model"] = query.value("Model");
        carData["Year"] = query.value("Year");
        carData["Color"] = query.value("Color");
        carData["Rental_Price"] = query.value("Rental_price");
        carData["Availability_Status"] = query.value("Availability_Status");
        carData["Total_Price"] = query.value("Total_Price");
        carData["Rental_Status"] = query.value("Rental_Status");

        QString startDateString = query.value("Start_Date").toString();
        QString returnDateString = query.value("Return_Date").toString();

        // Convert QStrings to QDates
        QDate startDate = QDate::fromString(startDateString, "yyyy-MM-dd");
        QDate returnDate = QDate::fromString(returnDateString, "yyyy-MM-dd");

        // Convert QDates to QDateTime objects
        QDateTime startDateTime(startDate, QTime(0, 0, 0));
        QDateTime returnDateTime(returnDate, QTime(23, 59, 59)); // Assuming you want end of day time

        // Set the QDateTime objects in the map
        carData["Start_Date"] = startDateTime;
        carData["Return_Date"] = returnDateTime;
    }

    return carData;
}

std::tuple<bool, QString> database::cancelRental(int carId) {
    // Check if the car exists in the rentals table
    QSqlQuery checkQuery(mydb);
    checkQuery.prepare("SELECT * FROM rentals WHERE CarID = :carId");
    checkQuery.bindValue(":carId", carId);
    if (!checkQuery.exec()) {
        qDebug() << "Error checking rental for car:" << checkQuery.lastError().text();
        return std::make_tuple(false, "Failed to cancel rental. Please try again later.");
    }

    if (!checkQuery.next()) {
        return std::make_tuple(false, "Car not found in rentals.");
    }

    // Update the rental status to "cancelled"
    QSqlQuery cancelQuery(mydb);
    cancelQuery.prepare("UPDATE rentals SET Rental_Status = 'cancelled' WHERE CarID = :carId");
    cancelQuery.bindValue(":carId", carId);
    if (!cancelQuery.exec()) {
        qDebug() << "Error cancelling rental:" << cancelQuery.lastError().text();
        return std::make_tuple(false, "Failed to cancel rental. Please try again later.");
    }

    // Update the availability status in the inventory table to "available"
    QSqlQuery updateInventoryQuery(mydb);
    updateInventoryQuery.prepare("UPDATE inventory SET Availability_Status = 'available' WHERE CarID = :carId");
    updateInventoryQuery.bindValue(":carId", carId);
    if (!updateInventoryQuery.exec()) {
        qDebug() << "Error updating inventory:" << updateInventoryQuery.lastError().text();
        // This error is not critical, so just log it without affecting the return value
    }

    // If update is successful, return true with success message
    return std::make_tuple(true, "Rental cancelled successfully.");
}

bool database::RentCar(std::tuple<int, int, QDateTime, QDateTime, int> rentalData) {
    int customerId = std::get<0>(rentalData);
    int carId = std::get<1>(rentalData);
    QDateTime startDate = std::get<2>(rentalData);
    QDateTime returnDate = std::get<3>(rentalData);
    int totalPrice = std::get<4>(rentalData);

    // Check if the customer already has an entry
    QSqlQuery checkQuery(mydb);
    checkQuery.prepare("SELECT * FROM rentals WHERE CustomerID = :customerId");
    checkQuery.bindValue(":customerId", customerId);
    if (!checkQuery.exec()) {
        qDebug() << "Error checking rental for customer:" << checkQuery.lastError().text();
        return false;
    }

    if (checkQuery.next()) {
        // Customer already has an entry

        if (checkQuery.value("Rental_Status").toString() == "active") {
            // Active rental found, return false
            return false;
        } else {
            // Update existing entry
            QSqlQuery updateQuery(mydb);
            updateQuery.prepare("UPDATE rentals SET EmployeeID = 8, CarID = :carId, Start_Date = :startDate, Return_Date = :returnDate, Total_Price = :totalPrice, Rental_Status = 'active' "
                                "WHERE CustomerID = :customerId");
            updateQuery.bindValue(":carId", carId);
            updateQuery.bindValue(":startDate", startDate.toString("yyyy-MM-dd hh:mm:ss"));
            updateQuery.bindValue(":returnDate", returnDate.toString("yyyy-MM-dd hh:mm:ss"));
            updateQuery.bindValue(":totalPrice", totalPrice);
            updateQuery.bindValue(":customerId", customerId);
            if (!updateQuery.exec()) {
                qDebug() << "Error updating rental:" << updateQuery.lastError().text();
                return false;
            }
        }
    } else {
        // No entry found, insert a new entry
        QSqlQuery insertQuery(mydb);
        insertQuery.prepare("INSERT INTO rentals (CostumerID, EmployeeID, CarID, Start_Date, Return_Date, Total_Price, Rental_Status) "
                            "VALUES (:customerId, 8, :carId, :startDate, :returnDate, :totalPrice, 'active')");
        insertQuery.bindValue(":customerId", customerId);
        insertQuery.bindValue(":carId", carId);
        insertQuery.bindValue(":startDate", startDate.toString("yyyy-MM-dd hh:mm:ss"));
        insertQuery.bindValue(":returnDate", returnDate.toString("yyyy-MM-dd hh:mm:ss"));
        insertQuery.bindValue(":totalPrice", totalPrice);
        if (!insertQuery.exec()) {
            qDebug() << "Error inserting rental:" << insertQuery.lastError().text();
            return false;
        }
    }

    // Query to check if an entry with the same customer ID exists
    QSqlQuery checkExistingQuery(mydb);
    checkExistingQuery.prepare("SELECT * FROM inventory WHERE CustomerID = :customerId");
    checkExistingQuery.bindValue(":customerId", customerId);
    if (!checkExistingQuery.exec()) {
        qDebug() << "Error checking existing entry in inventory:" << checkExistingQuery.lastError().text();
        // Handle error if needed
    } else {
        // If an entry with the same customer ID exists, update it
        if (checkExistingQuery.next()) {
            QSqlQuery updateExistingQuery(mydb);
            updateExistingQuery.prepare("UPDATE inventory SET Availability_Status = 'available', CustomerID = 8 WHERE CustomerID = :customerId");
            updateExistingQuery.bindValue(":customerId", customerId);
            if (!updateExistingQuery.exec()) {
                qDebug() << "Error updating existing entry in inventory:" << updateExistingQuery.lastError().text();
                // Handle error if needed
            }
        }
    }

    // Update the inventory entry for the current rental
    QSqlQuery inventoryQuery(mydb);
    inventoryQuery.prepare("UPDATE inventory SET Availability_Status = 'rented', CustomerID = :customerId WHERE CarID = :carId");
    inventoryQuery.bindValue(":customerId", customerId);
    inventoryQuery.bindValue(":carId", carId);
    if (!inventoryQuery.exec()) {
        qDebug() << "Error updating inventory:" << inventoryQuery.lastError().text();
        // Handle error if needed
    }


    return true;
}




