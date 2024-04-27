#include "mainwindow.h"
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
     connect(ui->login, SIGNAL(clicked()), SLOT(on_login_clicked()));

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

}

MainWindow::~MainWindow()
{
    delete ui;
}

//----------------------------------------LOGIN/LOGOUT SECTION----------------------------------------------------------

void MainWindow::on_login_clicked()
{
    QStringList userLogin;
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

    }

    else if(userLogin.size() >= 5 && userLogin.at(4) == "Customer")
    {

        ui->stackedWidget->setCurrentWidget(ui->customer);
        ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);

    }

    // displays an error message if the user role does not match any of the 2 user roles or is empty
    else
    {
        QMessageBox::warning (this, tr("Car Rental System"),
                             tr("Incorrect Username or Password"));
    }
}

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

        if (buttonName == "empAddCustomerBtn")
            ui->stackedWidget_4->setCurrentWidget(ui->addCustomer);
        else if (buttonName == "empEditDelCustomerBtn")
            ui->stackedWidget_4->setCurrentWidget(ui->editDelCustomer);
        else if (buttonName == "empPaymentsBtn")
            ui->stackedWidget_4->setCurrentWidget(ui->payments);
    }
}

void MainWindow::showCustomerPage() {
    // Get the sender button
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (button) {
        // Extract the page number from the object name
        QString buttonName = button->objectName();

        if (buttonName == "customerViewCarBtn")
            ui->stackedWidget_2->setCurrentWidget(ui->carsAvailable);
        else if (buttonName == "customerRentCarBtn")
            ui->stackedWidget_2->setCurrentWidget(ui->carRental);
        else if (buttonName == "customerViewRentalDetsBtn")
            ui->stackedWidget_2->setCurrentWidget(ui->rent_dets);
        }
}

//----------------------------------------ClOSE APPLICATION/LAST SECTION----------------------------------------------------------

void MainWindow::on_close_clicked()
{
    // Close the application
    QApplication::quit();
}

