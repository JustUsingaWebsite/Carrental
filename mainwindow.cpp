#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    QStringList userLogin;
    userLogin << mydb.verifyUser(ui->user_login->text(), ui->pass_login->text());

    // checks if any of the login fields are empty or if the query for user information came back empty and displays an error message
    if(ui->user_login->text().isEmpty() || ui->pass_login->text().isEmpty() || userLogin.isEmpty()){
        QMessageBox::warning (this, tr("Car Rental System"),
                             tr("Incorrect Username or Password"));
    }

    // checks if the user is an admin and enables the admin features, initializes the private adminUser data member
    // with the user information stored in userLogin, and moves the current window to the main page
    else if(userLogin.size() >= 5 && userLogin.at(4) == "Admin")
    {
        ui->stackedWidget->setCurrentIndex(3);
    }


    else if(userLogin.size() >= 5 && userLogin.at(4) == "Employee")
    {

        ui->stackedWidget->setCurrentIndex(2);

    }

    else if(userLogin.size() >= 5 && userLogin.at(4) == "Customer")
    {

        ui->stackedWidget->setCurrentIndex(1);

    }

    // displays an error message if the user role does not match any of the 2 user roles or is empty
    else
    {
        QMessageBox::warning (this, tr("Car Rental System"),
                             tr("Incorrect Username or Password"));
    }
}

