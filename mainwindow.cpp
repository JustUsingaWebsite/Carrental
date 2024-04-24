#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->stackedWidget->setCurrentWidget(ui->page);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    if (mydb.verifyUser(ui->user_login->text(), ui->pass_login->text())){

        if (ui->user_login->text().contains("admin")){
             ui->stackedWidget->setCurrentWidget(ui->page_6);
        }

        if (ui->user_login->text().contains("employee")){
             ui->stackedWidget->setCurrentWidget(ui->page_10);
        }

        if (ui->user_login->text().contains("customer")){
            ui->stackedWidget->setCurrentWidget(ui->page_2);
            ui->stackedWidget_2->setCurrentWidget(ui->page_5);
        }
    }
}

