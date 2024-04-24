#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<database.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->stackedWidget);

    ui->stackedWidget->setCurrentIndex(0);

    // connects for login and logout functionality
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // calls the verifyUser function from the database class that quries the data base for the users information
    // and stores it in userLogin
    QStringList userLogin;
    userLogin << db->verifyUser(ui->usernameInput->text(), ui->passwordInput->text());

    // checks if any of the login fields are empty or if the query for user information came back empty and displays an error message
    if(ui->usernameInput->text().isEmpty() || ui->passwordInput->text().isEmpty() || userLogin.empty()){
        QMessageBox::warning (this, tr("DOT Web App"),
                             tr("Incorrect Username or Password"));
    }

    // checks if the user is an admin and enables the admin features, initializes the private adminUser data member
    // with the user information stored in userLogin, and moves the current window to the main page
    else if(userLogin.at(4) == "Admin")
    {
        ui->stackedWidget_3->setCurrentIndex(0);

        admin.setID(userLogin.at(0));
        admin.setName(userLogin.at(1));
        admin.setPassword(userLogin.at(2));
        admin.setUsername(userLogin.at(3));
        admin.setRole(userLogin.at(4));
    }

    // checks if the user is a Traffic-Officer and disables admin features, initializes the private baseUser
    // data member with the user information stored in userLogin, and moves the current window to the main page
    else if(userLogin.at(4) == "Employee")
    {
        ui->stackedWidget_4->setCurrentIndex(0);

        users.setID(userLogin.at(0));
        users.setName(userLogin.at(1));
        users.setPassword(userLogin.at(2));
        users.setUsername(userLogin.at(3));
        users.setRole(userLogin.at(4));
    }

    else if(userLogin.at(4) == "Customer")
    {
        ui->stackedWidget_2->setCurrentIndex(1);

        users.setID(userLogin.at(0));
        users.setName(userLogin.at(1));
        users.setPassword(userLogin.at(2));
        users.setUsername(userLogin.at(3));
        users.setRole(userLogin.at(4));
    }

    // displays an error message if the user role does not match any of the 2 user roles or is empty
    else
    {
        QMessageBox::warning (this, tr("DOT Web App"),
                             tr("Incorrect Username or Password"));
    }
}

