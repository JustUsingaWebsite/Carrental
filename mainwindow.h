#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "database.h"
#include "inventory.h"
#include <car.h>
#include <admin.h>
#include <employee.h>
#include <customer.h>
#include <QMessageBox>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();

    void onLogoutButtonClicked();

    void showAdminPage();

    void showEmployeePage();

    void showCustomerPage();

    void on_close_clicked();

    void InventoryLoader();
    void ShowCarDetails();
private:
    Ui::MainWindow *ui;
    database mydb;
    Inventory inv;
    customer Customer;
};
#endif // MAINWINDOW_H
