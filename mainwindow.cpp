#include "mainwindow.h"
#include "customerlistmodel.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QObject>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->stackedWidget);

    //set the current window shown on the mainWindowStackedWidget to the login screen
    ui->stackedWidget->setCurrentIndex(0);

    // connects for login and logout functionality
     //connect(ui->login, SIGNAL(clicked()), SLOT(on_login_clicked()));

    connect(ui->adminLogoutBtn, SIGNAL(clicked()), this, SLOT(onLogoutButtonClicked()));
    connect(ui->empLogoutBtn, SIGNAL(clicked()), this, SLOT(onLogoutButtonClicked()));
    connect(ui->customerLogoutBtn, SIGNAL(clicked()), this, SLOT(onLogoutButtonClicked()));

    //connects buttons to switch bewteen admin pages
    connect(ui->addCarBtn, SIGNAL(clicked()), this, SLOT(showAdminPage()));
    connect(ui->editCarBtn, SIGNAL(clicked()), this, SLOT(showAdminPage()));
    connect(ui->reportBtn, SIGNAL(clicked()), this, SLOT(showAdminPage()));

    //connects buttons to switch bewteen employee pages
    connect(ui->empAddCustomerBtn, SIGNAL(clicked()), this, SLOT(showEmployeePage()));
    connect(ui->empEditDelCustomerBtn, SIGNAL(clicked()), this, SLOT(showEmployeePage()));
    connect(ui->empPaymentsBtn, SIGNAL(clicked()), this, SLOT(showEmployeePage()));

    //connects buttons to switch bewteen customer pages
    connect(ui->customerRentCarBtn, SIGNAL(clicked()), this, SLOT(showCustomerPage()));
    connect(ui->customerViewCarBtn, SIGNAL(clicked()), this, SLOT(showCustomerPage()));
    connect(ui->customerViewRentalDetsBtn, SIGNAL(clicked()), this, SLOT(showCustomerPage()));

    // Connect the clicked signal of the QListView to a slot
    connect(ui->carListView, &QListView::clicked, this, &MainWindow::onCarListViewClicked);
    connect(ui->viewCustomerDets, &QListView::clicked, this, &MainWindow::OnCustomerListViewClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//----------------------------------------LOGIN/LOGOUT SECTION----------------------------------------------------------

QStringList userLogin;
void MainWindow::on_login_clicked()
{
    userLogin.clear();
    userLogin << mydb.verifyUserSQLITE(ui->user_login->text(), ui->pass_login->text());


    // checks if any of the login fields are empty or if the query for user information came back empty and displays an error message
    if(ui->user_login->text().isEmpty() || ui->pass_login->text().isEmpty() || userLogin.isEmpty()){
        QMessageBox::warning (this, tr("Car Rental System"),
                             tr("Incorrect Username or Password"));
    }

    // checks if the user is an admin and enables the admin features, initializes the private adminUser data member
    // with the user information stored in userLogin, and moves the current window to the main page
    else if(userLogin.size() >= 5 && userLogin.at(4) == "Admin")
    {
        ui->stackedWidget->setCurrentWidget(ui->admin);
        ui->stackedWidget_3->setCurrentWidget(ui->report);
    }


    else if(userLogin.size() >= 5 && userLogin.at(4) == "Employee")
    {

        ui->stackedWidget->setCurrentWidget(ui->employee);
        ui->stackedWidget_4->setCurrentWidget(ui->addCustomer);

        UniversalEmployee.setUserID(userLogin.at(0));
        UniversalEmployee.setName(userLogin.at(1));
        UniversalEmployee.setPassword(userLogin.at(2));
        UniversalEmployee.setUsername(userLogin.at(3));
    }

    else if(userLogin.size() >= 5 && userLogin.at(4) == "Customer")
    {

        ui->stackedWidget->setCurrentWidget(ui->customer);
        ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);
        UniversalCustomer.setUserID(userLogin.at(0));
        UniversalCustomer.setName(userLogin.at(1));
        UniversalCustomer.setPassword(userLogin.at(2));
        UniversalCustomer.setUsername(userLogin.at(3));

        InventoryLoader();

    }

    // displays an error message if the user role does not match any of the 2 user roles or is empty
    else
    {
        QMessageBox::warning (this, tr("Car Rental System"),
                             tr("Incorrect Username or Password"));
    }
}


//----------------------------------------LOGOUT SECTION----------------------------------------------------------
void MainWindow::onLogoutButtonClicked() {
    // For example, if you want to switch to the login page:
    ui->stackedWidget->setCurrentIndex(0);
    ui->user_login->setText("");
    ui->pass_login->setText("");
}

//----------------------------------------PAGE NAVIGATION SECTION----------------------------------------------------------

// Implement the slot function to handle page navigation
void MainWindow::showAdminPage() {
    // Get the sender button
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        // Extract the page number from the object name
        QString buttonName = button->objectName();

        if (buttonName == "addCarBtn")
            ui->stackedWidget_3->setCurrentWidget(ui->addCar);
        else if (buttonName == "editCarBtn")
           ui->stackedWidget_3->setCurrentWidget(ui->editCar);
        else if (buttonName == "reportBtn")
          ui->stackedWidget_3->setCurrentWidget(ui->report);
    }
}

void MainWindow::showEmployeePage() {
    // Get the sender button
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        // Extract the page number from the object name
        QString buttonName = button->objectName();

        if (buttonName == "empAddCustomerBtn"){
            ui->stackedWidget_4->setCurrentWidget(ui->addCustomer);
        }

        else if (buttonName == "empEditDelCustomerBtn"){
            ui->stackedWidget_4->setCurrentWidget(ui->editDelCustomer);
            CustomerLoader();
        }

        else if (buttonName == "empPaymentsBtn"){
            ui->stackedWidget_4->setCurrentWidget(ui->payments);
            onPaymentsButtonClicked();
        }
    }
}

void MainWindow::showCustomerPage() {
    // Get the sender button
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        // Extract the page number from the object name
        QString buttonName = button->objectName();

        if (buttonName == "customerViewCarBtn"){
            ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);
            InventoryLoader();
        }

        else if (buttonName == "customerRentCarBtn"){
            ui->stackedWidget_2->setCurrentWidget(ui->carRental);
            onPushButtonClicked();
        }

        else if (buttonName == "customerViewRentalDetsBtn"){
            ui->stackedWidget_2->setCurrentWidget(ui->rent_dets);
            ShowCarDetails();
        }

    }
}

//----------------------------------------CUSTOMER PAGE FUNCTIONS SECTION----------------------------------------------------------


//--------------------------------LOAD INVENTORY [CUSTOMER PAGE FUNCTIONS SUBSECTION]----------------------------------------------------------

void MainWindow::InventoryLoader() {
    inv.loadInventory(mydb.getInventory());

    // Create a custom model to associate Car objects with rows
    CarListModel *carListModel = new CarListModel(this);
    carListModel->setCarData(inv.getCars());

    // Set the model to the QListView
    ui->carListView->setModel(carListModel);
}


void MainWindow::CustomerLoader() {
    MainWindowCustomer.StoreCustomers(mydb.getUsers());

    // Create a custom model to associate Car objects with rows
    CustomerListModel *cuslistmodel = new CustomerListModel(this);
    cuslistmodel->setCustomerData(MainWindowCustomer.getLoadedCustomers());

    // Set the model to the QListView
    ui->viewCustomerDets->setModel(cuslistmodel);
}


//-------------------------------VIEW CAR DETAILS [CUSTOMER PAGE FUNCTIONS SUBSECTION]-------------------------------------------------------

void MainWindow::ShowCarDetails(){
    auto carData = mydb.getUserRentedCar(UniversalCustomer.getUserID().toInt());

    if (!carData.empty()){
    QStringListModel *carListModel = new QStringListModel(this);
    QStringList carDetailsList;

    UniversalCar.setManufacture(carData["Manufacturer"].toString());
    UniversalCar.setModel(carData["Model"].toString());
    UniversalCar.setYear(carData["Year"].toInt());
    UniversalCar.setColor(carData["Color"].toString());
    UniversalCar.setRental_Price(carData["Rental_Price"].toInt());
    UniversalCar.setCarId(carData["CarID"].toInt());
    UniversalCar.setAvailability(carData["Availability_Status"].toString().trimmed() == "available");

    carDetailsList << UniversalCar.getCarDetails(UniversalCar).append(", Rental_Status: " + carData["Rental_Status"].toString());
    carListModel->setStringList(carDetailsList);
    ui->listView->setModel(carListModel);

    QDateTime startDateTime = carData["Start_Date"].toDateTime();
    QDateTime returnDateTime = carData["Return_Date"].toDateTime();

    ui->rentDetsStartDate->setDateTime(startDateTime);
    ui->rentDetsReturnDate->setDateTime(returnDateTime);
    ui->totalRentalCost->setText(carData["Total_Price"].toString());
    }
}

//----------------------------------------ClOSE APPLICATION/LAST SECTION----------------------------------------------------------

void MainWindow::on_close_clicked()
{
    // Close the application
    QApplication::quit();
}


void MainWindow::on_cancelRentalBtn_clicked()
{

    // Check if the list view has a model set
    if (!ui->listView->model()) {
        QMessageBox::warning(this, tr("Car Rental System"), tr("No model set for the list view."));
        return;
    }

    QModelIndexList selectedIndexes = ui->listView->selectionModel()->selectedIndexes();

    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, tr("Car Rental System"), tr("Please select a car to cancel the rental."));
        return;
    }

    // Get the selected car data from the model
    QString carDetails = ui->listView->model()->data(selectedIndexes.first(), Qt::DisplayRole).toString();

    // Extract the CarID from the selected data (assuming the CarID is the first part of the details)
    QStringList parts = carDetails.split(", ");
    int carId = parts.first().split(": ").last().toInt();


    // Update the rental status in the database to "cancelled" for the selected car
    std::tuple<bool, QString> success = mydb.cancelRental(carId);
    if (std::get<0>(success)) {
        QMessageBox::information(this, tr("Car Rental System"), std::get<1>(success));

        // Update the availability status of the car in the inventory table (optional)
        // Implement this if needed
        ui->listView->setModel(new QStringListModel(this));
        ui->rentDetsStartDate->setDateTime(QDateTime::currentDateTime());
        ui->rentDetsReturnDate->setDateTime(QDateTime::currentDateTime());
        ui->totalRentalCost->setText("");
    } else {
        QMessageBox::warning(this, tr("Car Rental System"), std::get<1>(success));
    }
}


void MainWindow::onCarListViewClicked(const QModelIndex &index) {
    // Retrieve the Car object associated with the clicked row
    QVariant data = ui->carListView->model()->data(index, Qt::UserRole);
    if (data.isValid()) {
        UniversalCar = data.value<Car>();

        // Now you have access to the selected Car object
        // You can store it or process it further as needed
    }
}

void MainWindow::OnCustomerListViewClicked(const QModelIndex &index) {
    // Retrieve the Car object associated with the clicked row
    QVariant data = ui->viewCustomerDets->model()->data(index, Qt::UserRole);
    if (data.isValid()) {
        UniversalCustomer = data.value<customer>();

        ui->editCustomerName->setText(UniversalCustomer.getName());
        ui->editCustomerEmail->setText(UniversalCustomer.getEmail());
        ui->editCustomerPhonenum->setText(UniversalCustomer.getPhone());
        ui->editCustomerUsername->setText(UniversalCustomer.getUsername());
        ui->editCustomerPassword->setText(UniversalCustomer.getPassword());
        // Now you have access to the selected Car object
        // You can store it or process it further as needed
    }
}

void MainWindow::onPushButtonClicked() {
    // Retrieve the stored data and process it
    // You can access the stored data from the member variable
    // or receive it as a parameter if you emitted a signal

    QModelIndexList selectedIndexes = ui->carListView->selectionModel()->selectedIndexes();

    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, tr("Car Rental System"), tr("Please select a car to rent."));
        ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);
        return;
    }

    if (!UniversalCar.isAvailable()){
        QMessageBox::warning(this, tr("Car Rental System"), UniversalCar.getmanufacture() + " " +  UniversalCar.getModel() + " is not available for rent");
        ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);
        return;
    }

    ui->rentalCarName->setText(UniversalCar.getmanufacture() + " " + UniversalCar.getModel());
    ui->rentalStartDate->setDateTime(QDateTime::currentDateTime());
    ui->rentalReturnDate->setDateTime(QDateTime::currentDateTime().addSecs(24 * 3600));
}

void MainWindow::onPaymentsButtonClicked(){
    qDebug() << "before crash";

    if (MainWindowCustomer.getLoadedCustomers().empty()){
        CustomerLoader();
    }

    QModelIndexList selectedIndexes = ui->viewCustomerDets->selectionModel()->selectedIndexes();

    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, tr("Car Rental System"), tr("Please select a User to pay for."));
        ui->stackedWidget_4->setCurrentWidget(ui->editDelCustomer);
        return;
    }

    //load in the car detials
    auto carData = mydb.getUserRentedCar(UniversalCustomer.getUserID().toInt());

    if (!carData.empty()){
        QStringListModel *carListModel = new QStringListModel(this);
        QStringList carDetailsList;

        UniversalCar.setManufacture(carData["Manufacturer"].toString());
        UniversalCar.setModel(carData["Model"].toString());
        UniversalCar.setYear(carData["Year"].toInt());
        UniversalCar.setColor(carData["Color"].toString());
        UniversalCar.setRental_Price(carData["Rental_Price"].toInt());
        UniversalCar.setCarId(carData["CarID"].toInt());
        UniversalCar.setAvailability(carData["Availability_Status"].toString().trimmed() == "available");

        carDetailsList << UniversalCar.getCarDetails(UniversalCar).append(", Rental_Status: " + carData["Rental_Status"].toString());
        carListModel->setStringList(carDetailsList);
        ui->paymentsCarDetsView->setModel(carListModel);
    } else{
        ui->paymentsCarDetsView->setModel(new QStringListModel(this));
    }

    ui->customerName->setText(UniversalCustomer.getName());
    ui->totalPayment->setText(carData["Total_Price"].toString());
}

void MainWindow::on_canelRentalBtn2_clicked()
{
    ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);
    ui->rentalCarName->setText("");
}

void MainWindow::on_saveRentalBtn_clicked()
{


   bool response = mydb.RentCar(std::make_tuple(UniversalCustomer.getUserID().toInt(),
                                 UniversalCar.getCarId(),
                                 ui->rentalStartDate->dateTime(),
                                 ui->rentalReturnDate->dateTime(),
                                 UniversalCar.getRental_Price() * 2));

    if (!response){
       QMessageBox::warning(this, tr("Car Rental System"), tr("Error while trying to rent car"));
        ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);
       return;
   }

    QMessageBox::warning(this, tr("Car Rental System"), tr("Success!"));
    ui->customerViewCarBtn->click();
}


void MainWindow::on_empSaveCustomerBtn_clicked()
{
    QString result = UniversalEmployee.CheckCustomer(ui->addCustomerName->text(),
                                           ui->addCustomerEmail->text(),
                                           ui->addCustomerPhone->text(),
                                           ui->customerUsername->text(),
                                           ui->customerPassword->text());

    if (result != "Everything looks fine"){
        QMessageBox::warning(this, tr("Car Rental System"), result);
        return;
    }

    bool result2 = mydb.MakeCustomer({ui->addCustomerName->text(),
    ui->addCustomerEmail->text(), ui->addCustomerPhone->text(),
    ui->customerUsername->text(),ui->customerPassword->text()});

    if (!result2){QMessageBox::warning(this, tr("Car Rental System"), tr("Error while trying to add customer")); return;}
    QMessageBox::warning(this, tr("Car Rental System"), tr("Success!"));
}


void MainWindow::on_empCancelAddCustomerBtn_clicked()
{
    ui->addCustomerName->clear();
    ui->addCustomerEmail->clear();
    ui->addCustomerPhone->clear();
    ui->customerUsername->clear();
    ui->customerPassword->clear();
}


void MainWindow::on_edit_car_2_textChanged(const QString &arg1)
{ 

    if (arg1 != ""){

    customer result = MainWindowCustomer.Searchcustomer(arg1);
    CustomerListModel *cuslistmodel = new CustomerListModel(this);
    cuslistmodel->setCustomerData({result});
     //Set the model to the QListView
    ui->viewCustomerDets->setModel(cuslistmodel);
    return;
    }

    CustomerListModel *cuslistmodel = new CustomerListModel(this);
    cuslistmodel->setCustomerData(MainWindowCustomer.getLoadedCustomers());

    // Set the model to the QListView
    ui->viewCustomerDets->setModel(cuslistmodel);
}


void MainWindow::on_saveCustomerEditBtn_clicked()
{
    QString result = UniversalEmployee.CheckCustomer(ui->editCustomerName->text(),
                                                     ui->editCustomerEmail->text(),
                                                     ui->editCustomerPhonenum->text(),
                                                     ui->editCustomerUsername->text(),
                                                     ui->editCustomerPassword->text());

    if (result != "Everything looks fine"){
        QMessageBox::warning(this, tr("Car Rental System"), result);
        return;
    }

    bool result2 = mydb.UpdateUser(UniversalCustomer.getUserID().toInt(),
    ui->editCustomerName->text(), ui->editCustomerEmail->text(),
    ui->editCustomerPhonenum->text(), ui->editCustomerUsername->text(),
    ui->editCustomerPassword->text());

    if (!result2){QMessageBox::warning(this, tr("Car Rental System"), tr("Error while trying to update customer")); return;}
    QMessageBox::warning(this, tr("Car Rental System"), tr("Success!"));
}


void MainWindow::on_delCustomerBtn_clicked()
{
    if (UniversalCustomer.getUserID() == ""){QMessageBox::warning(this, tr("Car Rental System"), tr("Error with UniversalCustomer 'did you set userid?'"));}

    bool result = mydb.DeleteUser(UniversalCustomer.getUserID().toInt());

    if (!result){QMessageBox::warning(this, tr("Car Rental System"), tr("Error while trying to delete customer")); return;}
    QMessageBox::warning(this, tr("Car Rental System"), tr("Success!"));
}


void MainWindow::on_cancelCustomerEditBtn_clicked()
{
    ui->editCustomerName->setText("");
    ui->editCustomerEmail->setText("");
    ui->editCustomerPhonenum->setText("");
    ui->editCustomerUsername->setText("");
    ui->editCustomerPassword->setText("");
    ui->edit_car_2->setText("");
}


void MainWindow::on_paidBtn_clicked()
{
    auto carData = mydb.getUserRentedCar(UniversalCustomer.getUserID().toInt());

    if (carData.empty()){
        if (carData["Rental_Status"] == "acive"){
            QMessageBox::warning(this, tr("Car Rental System"), UniversalCustomer.getName() + " already has an active rental.");
        }
        QMessageBox::warning(this, tr("Car Rental System"), UniversalCustomer.getName() + " has no pending rentals to be paid.");
    }

    bool result = mydb.MakePayment(UniversalCustomer.getUserID().toInt(),
                                   UniversalEmployee.getUserID().toInt(),
                                   QDateTime::currentDateTime(), carData["Total_Price"].toInt());

    if (!result){QMessageBox::warning(this, tr("Car Rental System"), tr("Error trying to pay for car"));}
    QMessageBox::warning(this, tr("Car Rental System"), tr("Success!"));
}

