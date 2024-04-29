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
                  "WHERE r.CostumerID = :userId");
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

