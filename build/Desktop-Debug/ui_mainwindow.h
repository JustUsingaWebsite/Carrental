/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
<<<<<<< HEAD
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
=======
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
<<<<<<< HEAD
=======
#include <QtWidgets/QTextEdit>
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
<<<<<<< HEAD
    QWidget *login_2;
=======
    QWidget *login;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QWidget *login_page;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
<<<<<<< HEAD
    QLineEdit *user_login;
    QLineEdit *pass_login;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *close;
    QPushButton *login;
    QWidget *customer;
    QStackedWidget *stackedWidget_2;
    QWidget *carsAvailable;
    QLabel *label_5;
    QListView *carListView;
    QWidget *carRental;
=======
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *closeButton;
    QPushButton *pushButton;
    QWidget *customer;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QWidget *rental_details;
    QLabel *label_10;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QDateTimeEdit *dateTimeEdit_4;
    QLabel *label_12;
    QPlainTextEdit *plainTextEdit_2;
    QLabel *label_11;
    QDateTimeEdit *dateTimeEdit_3;
    QLabel *label_13;
    QLabel *label_14;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_8;
    QWidget *cars_available;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit;
    QWidget *page_5;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QWidget *car_rental;
    QLabel *label_6;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
<<<<<<< HEAD
    QDateTimeEdit *rentalStartDate;
    QLabel *label_8;
    QLabel *label_9;
    QDateTimeEdit *rentalReturnDate;
    QLineEdit *rentalCarName;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *saveRentalBtn;
    QPushButton *canelRentalBtn;
    QWidget *rent_dets;
    QWidget *rental_details;
    QLabel *label_10;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QDateTimeEdit *rentDetsReturnDate;
    QLabel *label_12;
    QLabel *label_11;
    QDateTimeEdit *rentDetsStartDate;
    QLabel *label_13;
    QLabel *label_14;
    QListView *listView;
    QLabel *totalRentalCost;
    QPushButton *cancelRentalBtn;
    QLabel *label_4;
    QWidget *customerSideWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *customerViewCarBtn;
    QPushButton *customerViewRentalDetsBtn;
    QPushButton *customerRentCarBtn;
    QPushButton *customerLogoutBtn;
    QWidget *employee;
    QStackedWidget *stackedWidget_4;
    QWidget *addCustomer;
=======
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_8;
    QLabel *label_9;
    QDateTimeEdit *dateTimeEdit_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *customer_label;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *customerViewCarButton;
    QPushButton *customerViewRentsDetsButton;
    QPushButton *customerRentButton;
    QWidget *employee;
    QStackedWidget *stackedWidget_4;
    QWidget *add_costumer;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QWidget *add_user;
    QLabel *label_39;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_8;
    QLabel *label_37;
    QLabel *label_38;
<<<<<<< HEAD
    QLineEdit *customerUsername;
    QLineEdit *customerPassword;
=======
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
<<<<<<< HEAD
    QLineEdit *addCustomerName;
    QLineEdit *addCustomerEmail;
    QLineEdit *addCustomerPhone;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *empSaveCustomerBtn;
    QPushButton *empCancelAddCustomerBtn;
    QWidget *editDelCustomer;
=======
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QWidget *editDel_costumer;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QWidget *edit_delete_user;
    QLabel *label_45;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_9;
<<<<<<< HEAD
    QLineEdit *editCustomerName;
    QLabel *label_40;
    QLabel *label_42;
    QLineEdit *editCustomerUsername;
    QLabel *label_41;
    QLineEdit *editCustomerPhonenum;
    QLineEdit *editCustomerEmail;
    QLineEdit *editCustomerPassword;
=======
    QLineEdit *lineEdit_18;
    QLabel *label_40;
    QLabel *label_42;
    QLineEdit *lineEdit_21;
    QLabel *label_41;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_22;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QLabel *label_44;
    QLabel *label_43;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
<<<<<<< HEAD
    QPushButton *saveCustomerEditBtn;
    QPushButton *delCustomerBtn;
    QPushButton *cancelCustomerEditBtn;
    QTableView *viewCustomerDets;
=======
    QPushButton *pushButton_20;
    QPushButton *pushButton_19;
    QPushButton *pushButton_18;
    QTableView *tableView_3;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QFrame *editUserSearchFrame_3;
    QLineEdit *edit_car_2;
    QLabel *editUser_SearchLabel_3;
    QWidget *payments;
<<<<<<< HEAD
    QWidget *paymentswidget;
=======
    QWidget *widget_2;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QLabel *label_58;
    QWidget *gridLayoutWidget_13;
    QGridLayout *gridLayout_13;
    QLabel *label_59;
    QLabel *label_60;
<<<<<<< HEAD
    QLineEdit *customerName;
    QDateTimeEdit *paymentsReturnDate;
    QLabel *label_61;
    QLabel *label_62;
    QListView *paymentsCarDetsView;
    QLabel *totalPayment;
    QPushButton *paidBtn;
    QWidget *employeeSideWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *empAddCustomerBtn;
    QPushButton *empEditDelCustomerBtn;
    QPushButton *empPaymentsBtn;
    QPushButton *empLogoutBtn;
    QLabel *label_33;
    QWidget *admin;
    QLabel *label_15;
    QStackedWidget *stackedWidget_3;
    QWidget *addCar;
=======
    QLineEdit *lineEdit_33;
    QDateTimeEdit *dateTimeEdit_8;
    QLabel *label_61;
    QLabel *label_62;
    QLineEdit *lineEdit_34;
    QLineEdit *lineEdit_35;
    QPushButton *pushButton_26;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *empAddButton;
    QPushButton *empEditDelButton;
    QPushButton *empPayButton;
    QLabel *emp_label;
    QWidget *admin;
    QLabel *admin_label;
    QStackedWidget *stackedWidget_3;
    QWidget *add_car;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QLabel *label_16;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
<<<<<<< HEAD
    QLineEdit *addModelInput;
    QLineEdit *addYearInput;
    QLineEdit *addManufactorInput;
    QLineEdit *addColorInput;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *saveAddCarBtn;
    QWidget *editCar;
    QWidget *widget;
    QFrame *editUserSearchFrame_2;
    QLineEdit *edit_carSearch;
    QLabel *editUser_SearchLabel_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *editModelInput;
    QLabel *label_21;
    QLineEdit *editYearInput;
    QLineEdit *editManufactorInput;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *editColorInput;
=======
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_13;
    QWidget *edit_car_3;
    QWidget *widget;
    QFrame *editUserSearchFrame_2;
    QLineEdit *edit_car;
    QLabel *editUser_SearchLabel_2;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_5;
    QLabel *label_21;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *lineEdit_8;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QTableView *tableView;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *firstButton;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QPushButton *lastButton;
<<<<<<< HEAD
    QPushButton *SaveEditCar;
    QLabel *label_25;
    QWidget *report;
=======
    QPushButton *Save;
    QLabel *label_25;
    QWidget *rentalReport;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QLabel *label_26;
    QFrame *viewcarrentals;
    QLineEdit *RegisterFisherSearchLineEdir;
    QLabel *RegisterFisherLabel;
    QTableView *tableView_2;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_31;
    QLabel *label_27;
    QLineEdit *lineEdit_11;
    QLabel *label_28;
    QLabel *label_30;
    QLineEdit *lineEdit_12;
    QLabel *label_29;
    QLabel *label_32;
<<<<<<< HEAD
    QDateTimeEdit *reportStartDate;
    QDateTimeEdit *reportReturnDate;
    QWidget *adminSideWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *reportBtn;
    QPushButton *addCarBtn;
    QPushButton *editCarBtn;
    QPushButton *adminLogoutBtn;
=======
    QDateTimeEdit *dateTimeEdit_5;
    QDateTimeEdit *dateTimeEdit_6;
    QWidget *verticalWidget_21;
    QVBoxLayout *verticalLayout_2;
    QPushButton *adminAddButton;
    QPushButton *adminEditButton;
    QPushButton *adminReportButton;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
<<<<<<< HEAD
        MainWindow->resize(1041, 665);
=======
        MainWindow->resize(1150, 665);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:gray;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(60, 90, 971, 501));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
<<<<<<< HEAD
        login_2 = new QWidget();
        login_2->setObjectName("login_2");
        login_page = new QWidget(login_2);
=======
        login = new QWidget();
        login->setObjectName("login");
        login_page = new QWidget(login);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        login_page->setObjectName("login_page");
        login_page->setGeometry(QRect(50, 30, 851, 401));
        login_page->setStyleSheet(QString::fromUtf8("color:black;"));
        label = new QLabel(login_page);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 40, 111, 51));
        label->setStyleSheet(QString::fromUtf8("color:balck;\n"
"font: 600 28pt \"Segoe UI Semibold\";"));
        gridLayoutWidget = new QWidget(login_page);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(270, 170, 261, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

<<<<<<< HEAD
        user_login = new QLineEdit(gridLayoutWidget);
        user_login->setObjectName("user_login");
        user_login->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout->addWidget(user_login, 0, 1, 1, 1);

        pass_login = new QLineEdit(gridLayoutWidget);
        pass_login->setObjectName("pass_login");
        pass_login->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        pass_login->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pass_login, 1, 1, 1, 1);
=======
        usernameInput = new QLineEdit(gridLayoutWidget);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout->addWidget(usernameInput, 0, 1, 1, 1);

        passwordInput = new QLineEdit(gridLayoutWidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout->addWidget(passwordInput, 1, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        horizontalLayoutWidget = new QWidget(login_page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(280, 290, 221, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
<<<<<<< HEAD
        close = new QPushButton(horizontalLayoutWidget);
        close->setObjectName("close");
        close->setStyleSheet(QString::fromUtf8("\n"
=======
        closeButton = new QPushButton(horizontalLayoutWidget);
        closeButton->setObjectName("closeButton");
        closeButton->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout->addWidget(close);

        login = new QPushButton(horizontalLayoutWidget);
        login->setObjectName("login");
        login->setStyleSheet(QString::fromUtf8("\n"
=======
        horizontalLayout->addWidget(closeButton);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout->addWidget(login);

        stackedWidget->addWidget(login_2);
=======
        horizontalLayout->addWidget(pushButton);

        stackedWidget->addWidget(login);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        customer = new QWidget();
        customer->setObjectName("customer");
        stackedWidget_2 = new QStackedWidget(customer);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(140, 80, 771, 401));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color:gray;\n"
"color:black;"));
<<<<<<< HEAD
        carsAvailable = new QWidget();
        carsAvailable->setObjectName("carsAvailable");
        label_5 = new QLabel(carsAvailable);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 30, 171, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";"));
        carListView = new QListView(carsAvailable);
        carListView->setObjectName("carListView");
        carListView->setGeometry(QRect(100, 70, 581, 291));
        stackedWidget_2->addWidget(carsAvailable);
        carRental = new QWidget();
        carRental->setObjectName("carRental");
        car_rental = new QWidget(carRental);
        car_rental->setObjectName("car_rental");
        car_rental->setGeometry(QRect(60, 40, 651, 341));
        label_6 = new QLabel(car_rental);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 30, 171, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";"));
        gridLayoutWidget_2 = new QWidget(car_rental);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(190, 107, 261, 91));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        rentalStartDate = new QDateTimeEdit(gridLayoutWidget_2);
        rentalStartDate->setObjectName("rentalStartDate");

        gridLayout_2->addWidget(rentalStartDate, 1, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        rentalReturnDate = new QDateTimeEdit(gridLayoutWidget_2);
        rentalReturnDate->setObjectName("rentalReturnDate");

        gridLayout_2->addWidget(rentalReturnDate, 2, 1, 1, 1);

        rentalCarName = new QLineEdit(gridLayoutWidget_2);
        rentalCarName->setObjectName("rentalCarName");

        gridLayout_2->addWidget(rentalCarName, 0, 1, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(car_rental);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(160, 240, 301, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        saveRentalBtn = new QPushButton(horizontalLayoutWidget_2);
        saveRentalBtn->setObjectName("saveRentalBtn");
        saveRentalBtn->setStyleSheet(QString::fromUtf8("\n"
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

        horizontalLayout_2->addWidget(saveRentalBtn);

        canelRentalBtn = new QPushButton(horizontalLayoutWidget_2);
        canelRentalBtn->setObjectName("canelRentalBtn");
        canelRentalBtn->setStyleSheet(QString::fromUtf8("\n"
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

        horizontalLayout_2->addWidget(canelRentalBtn);

        stackedWidget_2->addWidget(carRental);
        rent_dets = new QWidget();
        rent_dets->setObjectName("rent_dets");
        rental_details = new QWidget(rent_dets);
=======
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        rental_details = new QWidget(page_3);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        rental_details->setObjectName("rental_details");
        rental_details->setGeometry(QRect(10, 20, 721, 371));
        label_10 = new QLabel(rental_details);
        label_10->setObjectName("label_10");
<<<<<<< HEAD
        label_10->setGeometry(QRect(270, 10, 131, 41));
        label_10->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";"));
        gridLayoutWidget_3 = new QWidget(rental_details);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(180, 50, 291, 221));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        rentDetsReturnDate = new QDateTimeEdit(gridLayoutWidget_3);
        rentDetsReturnDate->setObjectName("rentDetsReturnDate");

        gridLayout_3->addWidget(rentDetsReturnDate, 2, 1, 1, 1);
=======
        label_10->setGeometry(QRect(290, 30, 131, 41));
        label_10->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";"));
        gridLayoutWidget_3 = new QWidget(rental_details);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(200, 100, 291, 208));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        dateTimeEdit_4 = new QDateTimeEdit(gridLayoutWidget_3);
        dateTimeEdit_4->setObjectName("dateTimeEdit_4");

        gridLayout_3->addWidget(dateTimeEdit_4, 2, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

<<<<<<< HEAD
=======
        plainTextEdit_2 = new QPlainTextEdit(gridLayoutWidget_3);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout_3->addWidget(plainTextEdit_2, 0, 1, 1, 1);

>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

<<<<<<< HEAD
        rentDetsStartDate = new QDateTimeEdit(gridLayoutWidget_3);
        rentDetsStartDate->setObjectName("rentDetsStartDate");

        gridLayout_3->addWidget(rentDetsStartDate, 1, 1, 1, 1);
=======
        dateTimeEdit_3 = new QDateTimeEdit(gridLayoutWidget_3);
        dateTimeEdit_3->setObjectName("dateTimeEdit_3");

        gridLayout_3->addWidget(dateTimeEdit_3, 1, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_13 = new QLabel(gridLayoutWidget_3);
        label_13->setObjectName("label_13");

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_3);
        label_14->setObjectName("label_14");

        gridLayout_3->addWidget(label_14, 3, 0, 1, 1);

<<<<<<< HEAD
        listView = new QListView(gridLayoutWidget_3);
        listView->setObjectName("listView");

        gridLayout_3->addWidget(listView, 0, 1, 1, 1);

        totalRentalCost = new QLabel(gridLayoutWidget_3);
        totalRentalCost->setObjectName("totalRentalCost");

        gridLayout_3->addWidget(totalRentalCost, 3, 1, 1, 1);

        cancelRentalBtn = new QPushButton(rental_details);
        cancelRentalBtn->setObjectName("cancelRentalBtn");
        cancelRentalBtn->setGeometry(QRect(430, 290, 91, 41));
        cancelRentalBtn->setStyleSheet(QString::fromUtf8("\n"
=======
        textEdit_3 = new QTextEdit(gridLayoutWidget_3);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout_3->addWidget(textEdit_3, 3, 1, 1, 1);

        pushButton_8 = new QPushButton(rental_details);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(420, 270, 91, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));
<<<<<<< HEAD
        stackedWidget_2->addWidget(rent_dets);
        label_4 = new QLabel(customer);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 901, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
"color:black;\n"
"background-color: #4981B0;"));
        customerSideWidget = new QWidget(customer);
        customerSideWidget->setObjectName("customerSideWidget");
        customerSideWidget->setGeometry(QRect(10, 80, 121, 401));
        customerSideWidget->setStyleSheet(QString::fromUtf8("*{\n"
=======
        stackedWidget_2->addWidget(page_3);
        cars_available = new QWidget();
        cars_available->setObjectName("cars_available");
        label_5 = new QLabel(cars_available);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 30, 171, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";"));
        plainTextEdit = new QPlainTextEdit(cars_available);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(70, 120, 661, 261));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        stackedWidget_2->addWidget(cars_available);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        car_rental = new QWidget(page_5);
        car_rental->setObjectName("car_rental");
        car_rental->setGeometry(QRect(60, 40, 651, 341));
        label_6 = new QLabel(car_rental);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 30, 171, 51));
        label_6->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";"));
        gridLayoutWidget_2 = new QWidget(car_rental);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(190, 120, 212, 78));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget_2);
        dateTimeEdit->setObjectName("dateTimeEdit");

        gridLayout_2->addWidget(dateTimeEdit, 1, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        dateTimeEdit_2 = new QDateTimeEdit(gridLayoutWidget_2);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");

        gridLayout_2->addWidget(dateTimeEdit_2, 2, 1, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(car_rental);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(160, 240, 301, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_7);

        stackedWidget_2->addWidget(page_5);
        customer_label = new QLabel(customer);
        customer_label->setObjectName("customer_label");
        customer_label->setGeometry(QRect(10, 10, 901, 61));
        customer_label->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
"color:black;\n"
"background-color: #4981B0;"));
        verticalWidget = new QWidget(customer);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setGeometry(QRect(10, 80, 121, 401));
        verticalWidget->setStyleSheet(QString::fromUtf8("*{\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
"background-color: #4981B0;}\n"
".QPushButton{\n"
"background-color: Gray;\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));
<<<<<<< HEAD
        verticalLayout = new QVBoxLayout(customerSideWidget);
        verticalLayout->setObjectName("verticalLayout");
        customerViewCarBtn = new QPushButton(customerSideWidget);
        customerViewCarBtn->setObjectName("customerViewCarBtn");
        customerViewCarBtn->setStyleSheet(QString::fromUtf8("color:black;"));

        verticalLayout->addWidget(customerViewCarBtn);

        customerViewRentalDetsBtn = new QPushButton(customerSideWidget);
        customerViewRentalDetsBtn->setObjectName("customerViewRentalDetsBtn");
        customerViewRentalDetsBtn->setStyleSheet(QString::fromUtf8("color:black;\n"
""));

        verticalLayout->addWidget(customerViewRentalDetsBtn);

        customerRentCarBtn = new QPushButton(customerSideWidget);
        customerRentCarBtn->setObjectName("customerRentCarBtn");
        customerRentCarBtn->setStyleSheet(QString::fromUtf8("color:balck;"));

        verticalLayout->addWidget(customerRentCarBtn);

        customerLogoutBtn = new QPushButton(customerSideWidget);
        customerLogoutBtn->setObjectName("customerLogoutBtn");
        customerLogoutBtn->setStyleSheet(QString::fromUtf8("color:balck;"));

        verticalLayout->addWidget(customerLogoutBtn);
=======
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName("verticalLayout");
        customerViewCarButton = new QPushButton(verticalWidget);
        customerViewCarButton->setObjectName("customerViewCarButton");
        customerViewCarButton->setStyleSheet(QString::fromUtf8("color:black;"));

        verticalLayout->addWidget(customerViewCarButton);

        customerViewRentsDetsButton = new QPushButton(verticalWidget);
        customerViewRentsDetsButton->setObjectName("customerViewRentsDetsButton");
        customerViewRentsDetsButton->setStyleSheet(QString::fromUtf8("color:black;\n"
""));

        verticalLayout->addWidget(customerViewRentsDetsButton);

        customerRentButton = new QPushButton(verticalWidget);
        customerRentButton->setObjectName("customerRentButton");
        customerRentButton->setStyleSheet(QString::fromUtf8("color:balck;"));

        verticalLayout->addWidget(customerRentButton);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        stackedWidget->addWidget(customer);
        employee = new QWidget();
        employee->setObjectName("employee");
        stackedWidget_4 = new QStackedWidget(employee);
        stackedWidget_4->setObjectName("stackedWidget_4");
        stackedWidget_4->setGeometry(QRect(130, 60, 821, 421));
        stackedWidget_4->setStyleSheet(QString::fromUtf8("background-color:gray"));
<<<<<<< HEAD
        addCustomer = new QWidget();
        addCustomer->setObjectName("addCustomer");
        add_user = new QWidget(addCustomer);
=======
        add_costumer = new QWidget();
        add_costumer->setObjectName("add_costumer");
        add_user = new QWidget(add_costumer);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        add_user->setObjectName("add_user");
        add_user->setGeometry(QRect(10, 20, 791, 391));
        label_39 = new QLabel(add_user);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(280, 30, 191, 31));
        label_39->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
"Color:black;"));
        gridLayoutWidget_8 = new QWidget(add_user);
        gridLayoutWidget_8->setObjectName("gridLayoutWidget_8");
        gridLayoutWidget_8->setGeometry(QRect(420, 110, 301, 61));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(gridLayoutWidget_8);
        label_37->setObjectName("label_37");

        gridLayout_8->addWidget(label_37, 1, 0, 1, 1);

        label_38 = new QLabel(gridLayoutWidget_8);
        label_38->setObjectName("label_38");

        gridLayout_8->addWidget(label_38, 2, 0, 1, 1);

<<<<<<< HEAD
        customerUsername = new QLineEdit(gridLayoutWidget_8);
        customerUsername->setObjectName("customerUsername");
        customerUsername->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_8->addWidget(customerUsername, 1, 1, 1, 1);

        customerPassword = new QLineEdit(gridLayoutWidget_8);
        customerPassword->setObjectName("customerPassword");
        customerPassword->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_8->addWidget(customerPassword, 2, 1, 1, 1);
=======
        lineEdit_16 = new QLineEdit(gridLayoutWidget_8);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_8->addWidget(lineEdit_16, 1, 1, 1, 1);

        lineEdit_17 = new QLineEdit(gridLayoutWidget_8);
        lineEdit_17->setObjectName("lineEdit_17");
        lineEdit_17->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_8->addWidget(lineEdit_17, 2, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        gridLayoutWidget_7 = new QWidget(add_user);
        gridLayoutWidget_7->setObjectName("gridLayoutWidget_7");
        gridLayoutWidget_7->setGeometry(QRect(40, 110, 341, 86));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(gridLayoutWidget_7);
        label_34->setObjectName("label_34");

        gridLayout_7->addWidget(label_34, 0, 0, 1, 1);

        label_35 = new QLabel(gridLayoutWidget_7);
        label_35->setObjectName("label_35");

        gridLayout_7->addWidget(label_35, 1, 0, 1, 1);

        label_36 = new QLabel(gridLayoutWidget_7);
        label_36->setObjectName("label_36");

        gridLayout_7->addWidget(label_36, 2, 0, 1, 1);

<<<<<<< HEAD
        addCustomerName = new QLineEdit(gridLayoutWidget_7);
        addCustomerName->setObjectName("addCustomerName");
        addCustomerName->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_7->addWidget(addCustomerName, 0, 1, 1, 1);

        addCustomerEmail = new QLineEdit(gridLayoutWidget_7);
        addCustomerEmail->setObjectName("addCustomerEmail");
        addCustomerEmail->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_7->addWidget(addCustomerEmail, 1, 1, 1, 1);

        addCustomerPhone = new QLineEdit(gridLayoutWidget_7);
        addCustomerPhone->setObjectName("addCustomerPhone");
        addCustomerPhone->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_7->addWidget(addCustomerPhone, 2, 1, 1, 1);
=======
        lineEdit_13 = new QLineEdit(gridLayoutWidget_7);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_7->addWidget(lineEdit_13, 0, 1, 1, 1);

        lineEdit_14 = new QLineEdit(gridLayoutWidget_7);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_7->addWidget(lineEdit_14, 1, 1, 1, 1);

        lineEdit_15 = new QLineEdit(gridLayoutWidget_7);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_7->addWidget(lineEdit_15, 2, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        horizontalLayoutWidget_5 = new QWidget(add_user);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(120, 290, 481, 80));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
<<<<<<< HEAD
        empSaveCustomerBtn = new QPushButton(horizontalLayoutWidget_5);
        empSaveCustomerBtn->setObjectName("empSaveCustomerBtn");
        empSaveCustomerBtn->setStyleSheet(QString::fromUtf8("\n"
=======
        pushButton_17 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout_5->addWidget(empSaveCustomerBtn);

        empCancelAddCustomerBtn = new QPushButton(horizontalLayoutWidget_5);
        empCancelAddCustomerBtn->setObjectName("empCancelAddCustomerBtn");
        empCancelAddCustomerBtn->setStyleSheet(QString::fromUtf8("\n"
=======
        horizontalLayout_5->addWidget(pushButton_17);

        pushButton_16 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout_5->addWidget(empCancelAddCustomerBtn);

        stackedWidget_4->addWidget(addCustomer);
        editDelCustomer = new QWidget();
        editDelCustomer->setObjectName("editDelCustomer");
        edit_delete_user = new QWidget(editDelCustomer);
=======
        horizontalLayout_5->addWidget(pushButton_16);

        stackedWidget_4->addWidget(add_costumer);
        editDel_costumer = new QWidget();
        editDel_costumer->setObjectName("editDel_costumer");
        edit_delete_user = new QWidget(editDel_costumer);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        edit_delete_user->setObjectName("edit_delete_user");
        edit_delete_user->setGeometry(QRect(30, 20, 751, 391));
        label_45 = new QLabel(edit_delete_user);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(240, 10, 221, 61));
        label_45->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
"Color:Black"));
        gridLayoutWidget_9 = new QWidget(edit_delete_user);
        gridLayoutWidget_9->setObjectName("gridLayoutWidget_9");
        gridLayoutWidget_9->setGeometry(QRect(50, 90, 341, 162));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
<<<<<<< HEAD
        editCustomerName = new QLineEdit(gridLayoutWidget_9);
        editCustomerName->setObjectName("editCustomerName");
        editCustomerName->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(editCustomerName, 0, 1, 1, 1);
=======
        lineEdit_18 = new QLineEdit(gridLayoutWidget_9);
        lineEdit_18->setObjectName("lineEdit_18");
        lineEdit_18->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(lineEdit_18, 0, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_40 = new QLabel(gridLayoutWidget_9);
        label_40->setObjectName("label_40");

        gridLayout_9->addWidget(label_40, 0, 0, 1, 1);

        label_42 = new QLabel(gridLayoutWidget_9);
        label_42->setObjectName("label_42");

        gridLayout_9->addWidget(label_42, 2, 0, 1, 1);

<<<<<<< HEAD
        editCustomerUsername = new QLineEdit(gridLayoutWidget_9);
        editCustomerUsername->setObjectName("editCustomerUsername");
        editCustomerUsername->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(editCustomerUsername, 3, 1, 1, 1);
=======
        lineEdit_21 = new QLineEdit(gridLayoutWidget_9);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(lineEdit_21, 3, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_41 = new QLabel(gridLayoutWidget_9);
        label_41->setObjectName("label_41");

        gridLayout_9->addWidget(label_41, 1, 0, 1, 1);

<<<<<<< HEAD
        editCustomerPhonenum = new QLineEdit(gridLayoutWidget_9);
        editCustomerPhonenum->setObjectName("editCustomerPhonenum");
        editCustomerPhonenum->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(editCustomerPhonenum, 2, 1, 1, 1);

        editCustomerEmail = new QLineEdit(gridLayoutWidget_9);
        editCustomerEmail->setObjectName("editCustomerEmail");
        editCustomerEmail->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(editCustomerEmail, 1, 1, 1, 1);

        editCustomerPassword = new QLineEdit(gridLayoutWidget_9);
        editCustomerPassword->setObjectName("editCustomerPassword");
        editCustomerPassword->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(editCustomerPassword, 4, 1, 1, 1);
=======
        lineEdit_20 = new QLineEdit(gridLayoutWidget_9);
        lineEdit_20->setObjectName("lineEdit_20");
        lineEdit_20->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(lineEdit_20, 2, 1, 1, 1);

        lineEdit_19 = new QLineEdit(gridLayoutWidget_9);
        lineEdit_19->setObjectName("lineEdit_19");
        lineEdit_19->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(lineEdit_19, 1, 1, 1, 1);

        lineEdit_22 = new QLineEdit(gridLayoutWidget_9);
        lineEdit_22->setObjectName("lineEdit_22");
        lineEdit_22->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_9->addWidget(lineEdit_22, 4, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_44 = new QLabel(gridLayoutWidget_9);
        label_44->setObjectName("label_44");

        gridLayout_9->addWidget(label_44, 4, 0, 1, 1);

        label_43 = new QLabel(gridLayoutWidget_9);
        label_43->setObjectName("label_43");

        gridLayout_9->addWidget(label_43, 3, 0, 1, 1);

        horizontalLayoutWidget_6 = new QWidget(edit_delete_user);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(60, 280, 341, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
<<<<<<< HEAD
        saveCustomerEditBtn = new QPushButton(horizontalLayoutWidget_6);
        saveCustomerEditBtn->setObjectName("saveCustomerEditBtn");
        saveCustomerEditBtn->setStyleSheet(QString::fromUtf8("\n"
=======
        pushButton_20 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout_6->addWidget(saveCustomerEditBtn);

        delCustomerBtn = new QPushButton(horizontalLayoutWidget_6);
        delCustomerBtn->setObjectName("delCustomerBtn");
        delCustomerBtn->setStyleSheet(QString::fromUtf8("\n"
=======
        horizontalLayout_6->addWidget(pushButton_20);

        pushButton_19 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout_6->addWidget(delCustomerBtn);

        cancelCustomerEditBtn = new QPushButton(horizontalLayoutWidget_6);
        cancelCustomerEditBtn->setObjectName("cancelCustomerEditBtn");
        cancelCustomerEditBtn->setStyleSheet(QString::fromUtf8("\n"
=======
        horizontalLayout_6->addWidget(pushButton_19);

        pushButton_18 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout_6->addWidget(cancelCustomerEditBtn);

        viewCustomerDets = new QTableView(edit_delete_user);
        viewCustomerDets->setObjectName("viewCustomerDets");
        viewCustomerDets->setGeometry(QRect(450, 131, 281, 221));
        viewCustomerDets->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
=======
        horizontalLayout_6->addWidget(pushButton_18);

        tableView_3 = new QTableView(edit_delete_user);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(450, 131, 281, 221));
        tableView_3->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
"border-width: 1px;"));
        editUserSearchFrame_3 = new QFrame(edit_delete_user);
        editUserSearchFrame_3->setObjectName("editUserSearchFrame_3");
        editUserSearchFrame_3->setGeometry(QRect(450, 70, 231, 38));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editUserSearchFrame_3->sizePolicy().hasHeightForWidth());
        editUserSearchFrame_3->setSizePolicy(sizePolicy);
        editUserSearchFrame_3->setFocusPolicy(Qt::NoFocus);
        editUserSearchFrame_3->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        editUserSearchFrame_3->setFrameShape(QFrame::StyledPanel);
        editUserSearchFrame_3->setFrameShadow(QFrame::Raised);
        edit_car_2 = new QLineEdit(editUserSearchFrame_3);
        edit_car_2->setObjectName("edit_car_2");
        edit_car_2->setGeometry(QRect(50, 10, 471, 21));
        QFont font;
        font.setPointSize(11);
        edit_car_2->setFont(font);
#if QT_CONFIG(statustip)
        edit_car_2->setStatusTip(QString::fromUtf8("Enter user first name or last name"));
#endif // QT_CONFIG(statustip)
        edit_car_2->setAutoFillBackground(false);
        edit_car_2->setStyleSheet(QString::fromUtf8("border: none;"));
        edit_car_2->setFrame(false);
        edit_car_2->setClearButtonEnabled(true);
        editUser_SearchLabel_3 = new QLabel(editUserSearchFrame_3);
        editUser_SearchLabel_3->setObjectName("editUser_SearchLabel_3");
        editUser_SearchLabel_3->setGeometry(QRect(20, 10, 21, 21));
        editUser_SearchLabel_3->setStyleSheet(QString::fromUtf8("border: none;"));
        editUser_SearchLabel_3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/search.svg")));
        editUser_SearchLabel_3->setScaledContents(true);
<<<<<<< HEAD
        stackedWidget_4->addWidget(editDelCustomer);
        payments = new QWidget();
        payments->setObjectName("payments");
        paymentswidget = new QWidget(payments);
        paymentswidget->setObjectName("paymentswidget");
        paymentswidget->setGeometry(QRect(20, 20, 781, 391));
        label_58 = new QLabel(paymentswidget);
=======
        stackedWidget_4->addWidget(editDel_costumer);
        payments = new QWidget();
        payments->setObjectName("payments");
        widget_2 = new QWidget(payments);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(20, 20, 781, 391));
        label_58 = new QLabel(widget_2);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_58->setObjectName("label_58");
        label_58->setGeometry(QRect(270, 20, 121, 31));
        label_58->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 900 18pt \"Segoe UI Black\";"));
<<<<<<< HEAD
        gridLayoutWidget_13 = new QWidget(paymentswidget);
        gridLayoutWidget_13->setObjectName("gridLayoutWidget_13");
        gridLayoutWidget_13->setGeometry(QRect(200, 110, 291, 154));
=======
        gridLayoutWidget_13 = new QWidget(widget_2);
        gridLayoutWidget_13->setObjectName("gridLayoutWidget_13");
        gridLayoutWidget_13->setGeometry(QRect(200, 110, 291, 116));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        gridLayout_13 = new QGridLayout(gridLayoutWidget_13);
        gridLayout_13->setObjectName("gridLayout_13");
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_59 = new QLabel(gridLayoutWidget_13);
        label_59->setObjectName("label_59");

        gridLayout_13->addWidget(label_59, 0, 0, 1, 1);

        label_60 = new QLabel(gridLayoutWidget_13);
        label_60->setObjectName("label_60");

        gridLayout_13->addWidget(label_60, 1, 0, 1, 1);

<<<<<<< HEAD
        customerName = new QLineEdit(gridLayoutWidget_13);
        customerName->setObjectName("customerName");
        customerName->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_13->addWidget(customerName, 0, 1, 1, 1);

        paymentsReturnDate = new QDateTimeEdit(gridLayoutWidget_13);
        paymentsReturnDate->setObjectName("paymentsReturnDate");

        gridLayout_13->addWidget(paymentsReturnDate, 2, 1, 1, 1);
=======
        lineEdit_33 = new QLineEdit(gridLayoutWidget_13);
        lineEdit_33->setObjectName("lineEdit_33");
        lineEdit_33->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_13->addWidget(lineEdit_33, 0, 1, 1, 1);

        dateTimeEdit_8 = new QDateTimeEdit(gridLayoutWidget_13);
        dateTimeEdit_8->setObjectName("dateTimeEdit_8");

        gridLayout_13->addWidget(dateTimeEdit_8, 2, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_61 = new QLabel(gridLayoutWidget_13);
        label_61->setObjectName("label_61");

        gridLayout_13->addWidget(label_61, 2, 0, 1, 1);

        label_62 = new QLabel(gridLayoutWidget_13);
        label_62->setObjectName("label_62");

        gridLayout_13->addWidget(label_62, 3, 0, 1, 1);

<<<<<<< HEAD
        paymentsCarDetsView = new QListView(gridLayoutWidget_13);
        paymentsCarDetsView->setObjectName("paymentsCarDetsView");

        gridLayout_13->addWidget(paymentsCarDetsView, 1, 1, 1, 1);

        totalPayment = new QLabel(gridLayoutWidget_13);
        totalPayment->setObjectName("totalPayment");

        gridLayout_13->addWidget(totalPayment, 3, 1, 1, 1);

        paidBtn = new QPushButton(paymentswidget);
        paidBtn->setObjectName("paidBtn");
        paidBtn->setGeometry(QRect(480, 290, 80, 24));
        paidBtn->setStyleSheet(QString::fromUtf8("*{\n"
=======
        lineEdit_34 = new QLineEdit(gridLayoutWidget_13);
        lineEdit_34->setObjectName("lineEdit_34");
        lineEdit_34->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_13->addWidget(lineEdit_34, 1, 1, 1, 1);

        lineEdit_35 = new QLineEdit(gridLayoutWidget_13);
        lineEdit_35->setObjectName("lineEdit_35");
        lineEdit_35->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_13->addWidget(lineEdit_35, 3, 1, 1, 1);

        pushButton_26 = new QPushButton(widget_2);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(480, 290, 80, 24));
        pushButton_26->setStyleSheet(QString::fromUtf8("*{\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
"background-color: #4981B0;}\n"
".QPushButton{\n"
"background-color: Gray;\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));
        stackedWidget_4->addWidget(payments);
<<<<<<< HEAD
        employeeSideWidget = new QWidget(employee);
        employeeSideWidget->setObjectName("employeeSideWidget");
        employeeSideWidget->setGeometry(QRect(10, 60, 111, 421));
        employeeSideWidget->setStyleSheet(QString::fromUtf8("*{\n"
=======
        verticalWidget_2 = new QWidget(employee);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(10, 60, 111, 421));
        verticalWidget_2->setStyleSheet(QString::fromUtf8("*{\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
"background-color: #4981B0;}\n"
".QPushButton{\n"
"background-color: Gray;\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));
<<<<<<< HEAD
        verticalLayout_3 = new QVBoxLayout(employeeSideWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        empAddCustomerBtn = new QPushButton(employeeSideWidget);
        empAddCustomerBtn->setObjectName("empAddCustomerBtn");
        empAddCustomerBtn->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(empAddCustomerBtn);

        empEditDelCustomerBtn = new QPushButton(employeeSideWidget);
        empEditDelCustomerBtn->setObjectName("empEditDelCustomerBtn");

        verticalLayout_3->addWidget(empEditDelCustomerBtn);

        empPaymentsBtn = new QPushButton(employeeSideWidget);
        empPaymentsBtn->setObjectName("empPaymentsBtn");

        verticalLayout_3->addWidget(empPaymentsBtn);

        empLogoutBtn = new QPushButton(employeeSideWidget);
        empLogoutBtn->setObjectName("empLogoutBtn");

        verticalLayout_3->addWidget(empLogoutBtn);

        label_33 = new QLabel(employee);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(10, 10, 941, 41));
        label_33->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI Black\";\n"
=======
        verticalLayout_3 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        empAddButton = new QPushButton(verticalWidget_2);
        empAddButton->setObjectName("empAddButton");
        empAddButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(empAddButton);

        empEditDelButton = new QPushButton(verticalWidget_2);
        empEditDelButton->setObjectName("empEditDelButton");

        verticalLayout_3->addWidget(empEditDelButton);

        empPayButton = new QPushButton(verticalWidget_2);
        empPayButton->setObjectName("empPayButton");

        verticalLayout_3->addWidget(empPayButton);

        emp_label = new QLabel(employee);
        emp_label->setObjectName("emp_label");
        emp_label->setGeometry(QRect(10, 10, 941, 41));
        emp_label->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI Black\";\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
"\n"
"color:black;\n"
"background-color: #4981B0;"));
        stackedWidget->addWidget(employee);
        admin = new QWidget();
        admin->setObjectName("admin");
<<<<<<< HEAD
        label_15 = new QLabel(admin);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 20, 931, 51));
        label_15->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
=======
        admin_label = new QLabel(admin);
        admin_label->setObjectName("admin_label");
        admin_label->setGeometry(QRect(10, 20, 931, 51));
        admin_label->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
"color:black;\n"
"background-color: #4981B0;"));
        stackedWidget_3 = new QStackedWidget(admin);
        stackedWidget_3->setObjectName("stackedWidget_3");
        stackedWidget_3->setGeometry(QRect(120, 80, 821, 401));
        stackedWidget_3->setStyleSheet(QString::fromUtf8("Background-color:gray"));
<<<<<<< HEAD
        addCar = new QWidget();
        addCar->setObjectName("addCar");
        label_16 = new QLabel(addCar);
=======
        add_car = new QWidget();
        add_car->setObjectName("add_car");
        label_16 = new QLabel(add_car);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(330, 20, 111, 31));
        label_16->setStyleSheet(QString::fromUtf8("font: 900 18pt \"Segoe UI Black\";\n"
"color:black;"));
<<<<<<< HEAD
        gridLayoutWidget_4 = new QWidget(addCar);
=======
        gridLayoutWidget_4 = new QWidget(add_car);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(250, 130, 251, 116));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(gridLayoutWidget_4);
        label_17->setObjectName("label_17");

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_4);
        label_18->setObjectName("label_18");

        gridLayout_4->addWidget(label_18, 3, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_4);
        label_19->setObjectName("label_19");

        gridLayout_4->addWidget(label_19, 1, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_4);
        label_20->setObjectName("label_20");

        gridLayout_4->addWidget(label_20, 2, 0, 1, 1);

<<<<<<< HEAD
        addModelInput = new QLineEdit(gridLayoutWidget_4);
        addModelInput->setObjectName("addModelInput");
        addModelInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_4->addWidget(addModelInput, 1, 1, 1, 1);

        addYearInput = new QLineEdit(gridLayoutWidget_4);
        addYearInput->setObjectName("addYearInput");
        addYearInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 9px;"));

        gridLayout_4->addWidget(addYearInput, 2, 1, 1, 1);

        addManufactorInput = new QLineEdit(gridLayoutWidget_4);
        addManufactorInput->setObjectName("addManufactorInput");
        addManufactorInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_4->addWidget(addManufactorInput, 0, 1, 1, 1);

        addColorInput = new QLineEdit(gridLayoutWidget_4);
        addColorInput->setObjectName("addColorInput");
        addColorInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_4->addWidget(addColorInput, 3, 1, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(addCar);
=======
        lineEdit_2 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_4->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 9px;"));

        gridLayout_4->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget_4);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_4->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_4->addWidget(lineEdit_4, 3, 1, 1, 1);

        horizontalLayoutWidget_3 = new QWidget(add_car);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(310, 290, 141, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
<<<<<<< HEAD
        saveAddCarBtn = new QPushButton(horizontalLayoutWidget_3);
        saveAddCarBtn->setObjectName("saveAddCarBtn");
        saveAddCarBtn->setStyleSheet(QString::fromUtf8("\n"
=======
        pushButton_13 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));

<<<<<<< HEAD
        horizontalLayout_3->addWidget(saveAddCarBtn);

        stackedWidget_3->addWidget(addCar);
        editCar = new QWidget();
        editCar->setObjectName("editCar");
        widget = new QWidget(editCar);
=======
        horizontalLayout_3->addWidget(pushButton_13);

        stackedWidget_3->addWidget(add_car);
        edit_car_3 = new QWidget();
        edit_car_3->setObjectName("edit_car_3");
        widget = new QWidget(edit_car_3);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 781, 361));
        widget->setStyleSheet(QString::fromUtf8("\n"
".QPushButton{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));
        editUserSearchFrame_2 = new QFrame(widget);
        editUserSearchFrame_2->setObjectName("editUserSearchFrame_2");
<<<<<<< HEAD
        editUserSearchFrame_2->setGeometry(QRect(450, 40, 291, 38));
        sizePolicy.setHeightForWidth(editUserSearchFrame_2->sizePolicy().hasHeightForWidth());
        editUserSearchFrame_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(false);
        editUserSearchFrame_2->setFont(font1);
=======
        editUserSearchFrame_2->setGeometry(QRect(450, 40, 271, 38));
        sizePolicy.setHeightForWidth(editUserSearchFrame_2->sizePolicy().hasHeightForWidth());
        editUserSearchFrame_2->setSizePolicy(sizePolicy);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        editUserSearchFrame_2->setFocusPolicy(Qt::NoFocus);
        editUserSearchFrame_2->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        editUserSearchFrame_2->setFrameShape(QFrame::StyledPanel);
        editUserSearchFrame_2->setFrameShadow(QFrame::Raised);
<<<<<<< HEAD
        edit_carSearch = new QLineEdit(editUserSearchFrame_2);
        edit_carSearch->setObjectName("edit_carSearch");
        edit_carSearch->setGeometry(QRect(50, 10, 471, 21));
        edit_carSearch->setFont(font);
#if QT_CONFIG(statustip)
        edit_carSearch->setStatusTip(QString::fromUtf8("Enter user first name or last name"));
#endif // QT_CONFIG(statustip)
        edit_carSearch->setAutoFillBackground(false);
        edit_carSearch->setStyleSheet(QString::fromUtf8("border: none;"));
        edit_carSearch->setFrame(false);
        edit_carSearch->setClearButtonEnabled(true);
=======
        edit_car = new QLineEdit(editUserSearchFrame_2);
        edit_car->setObjectName("edit_car");
        edit_car->setGeometry(QRect(50, 10, 471, 21));
        edit_car->setFont(font);
#if QT_CONFIG(statustip)
        edit_car->setStatusTip(QString::fromUtf8("Enter user first name or last name"));
#endif // QT_CONFIG(statustip)
        edit_car->setAutoFillBackground(false);
        edit_car->setStyleSheet(QString::fromUtf8("border: none;"));
        edit_car->setFrame(false);
        edit_car->setClearButtonEnabled(true);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        editUser_SearchLabel_2 = new QLabel(editUserSearchFrame_2);
        editUser_SearchLabel_2->setObjectName("editUser_SearchLabel_2");
        editUser_SearchLabel_2->setGeometry(QRect(20, 10, 21, 21));
        editUser_SearchLabel_2->setStyleSheet(QString::fromUtf8("border: none;"));
        editUser_SearchLabel_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/search.svg")));
        editUser_SearchLabel_2->setScaledContents(true);
        gridLayoutWidget_5 = new QWidget(widget);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(60, 110, 251, 141));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
<<<<<<< HEAD
        editModelInput = new QLineEdit(gridLayoutWidget_5);
        editModelInput->setObjectName("editModelInput");
        editModelInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(editModelInput, 1, 1, 1, 1);
=======
        lineEdit_5 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(lineEdit_5, 1, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_21 = new QLabel(gridLayoutWidget_5);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_5->addWidget(label_21, 0, 0, 1, 1);

<<<<<<< HEAD
        editYearInput = new QLineEdit(gridLayoutWidget_5);
        editYearInput->setObjectName("editYearInput");
        editYearInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(editYearInput, 2, 1, 1, 1);

        editManufactorInput = new QLineEdit(gridLayoutWidget_5);
        editManufactorInput->setObjectName("editManufactorInput");
        editManufactorInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(editManufactorInput, 0, 1, 1, 1);
=======
        lineEdit_6 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(lineEdit_6, 2, 1, 1, 1);

        lineEdit_7 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(lineEdit_7, 0, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_22 = new QLabel(gridLayoutWidget_5);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_5->addWidget(label_22, 3, 0, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_5);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_5->addWidget(label_23, 1, 0, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_5);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_5->addWidget(label_24, 2, 0, 1, 1);

<<<<<<< HEAD
        editColorInput = new QLineEdit(gridLayoutWidget_5);
        editColorInput->setObjectName("editColorInput");
        editColorInput->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(editColorInput, 3, 1, 1, 1);
=======
        lineEdit_8 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_5->addWidget(lineEdit_8, 3, 1, 1, 1);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(450, 110, 301, 192));
        tableView->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
""));
        horizontalLayoutWidget_4 = new QWidget(widget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(30, 290, 341, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        firstButton = new QPushButton(horizontalLayoutWidget_4);
        firstButton->setObjectName("firstButton");

        horizontalLayout_4->addWidget(firstButton);

        previousButton = new QPushButton(horizontalLayoutWidget_4);
        previousButton->setObjectName("previousButton");

        horizontalLayout_4->addWidget(previousButton);

        nextButton = new QPushButton(horizontalLayoutWidget_4);
        nextButton->setObjectName("nextButton");

        horizontalLayout_4->addWidget(nextButton);

        lastButton = new QPushButton(horizontalLayoutWidget_4);
        lastButton->setObjectName("lastButton");

        horizontalLayout_4->addWidget(lastButton);

<<<<<<< HEAD
        SaveEditCar = new QPushButton(horizontalLayoutWidget_4);
        SaveEditCar->setObjectName("SaveEditCar");

        horizontalLayout_4->addWidget(SaveEditCar);
=======
        Save = new QPushButton(horizontalLayoutWidget_4);
        Save->setObjectName("Save");

        horizontalLayout_4->addWidget(Save);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        label_25 = new QLabel(widget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(290, 0, 111, 31));
        label_25->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI Black\";\n"
"Color:Black;"));
<<<<<<< HEAD
        stackedWidget_3->addWidget(editCar);
        report = new QWidget();
        report->setObjectName("report");
        label_26 = new QLabel(report);
=======
        stackedWidget_3->addWidget(edit_car_3);
        rentalReport = new QWidget();
        rentalReport->setObjectName("rentalReport");
        label_26 = new QLabel(rentalReport);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(330, 20, 161, 41));
        label_26->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 900 16pt \"Segoe UI Black\";"));
<<<<<<< HEAD
        viewcarrentals = new QFrame(report);
=======
        viewcarrentals = new QFrame(rentalReport);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        viewcarrentals->setObjectName("viewcarrentals");
        viewcarrentals->setGeometry(QRect(150, 80, 531, 38));
        viewcarrentals->setFocusPolicy(Qt::NoFocus);
        viewcarrentals->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));
        viewcarrentals->setFrameShape(QFrame::StyledPanel);
        viewcarrentals->setFrameShadow(QFrame::Raised);
        RegisterFisherSearchLineEdir = new QLineEdit(viewcarrentals);
        RegisterFisherSearchLineEdir->setObjectName("RegisterFisherSearchLineEdir");
        RegisterFisherSearchLineEdir->setGeometry(QRect(50, 10, 471, 21));
        RegisterFisherSearchLineEdir->setFont(font);
        RegisterFisherSearchLineEdir->setAutoFillBackground(false);
        RegisterFisherSearchLineEdir->setStyleSheet(QString::fromUtf8("border: none;"));
        RegisterFisherSearchLineEdir->setFrame(false);
        RegisterFisherSearchLineEdir->setClearButtonEnabled(true);
        RegisterFisherLabel = new QLabel(viewcarrentals);
        RegisterFisherLabel->setObjectName("RegisterFisherLabel");
        RegisterFisherLabel->setGeometry(QRect(20, 10, 21, 21));
        RegisterFisherLabel->setStyleSheet(QString::fromUtf8("border: none;"));
        RegisterFisherLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/images/search.svg")));
        RegisterFisherLabel->setScaledContents(true);
<<<<<<< HEAD
        tableView_2 = new QTableView(report);
=======
        tableView_2 = new QTableView(rentalReport);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(440, 140, 331, 192));
        tableView_2->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
""));
<<<<<<< HEAD
        gridLayoutWidget_6 = new QWidget(report);
=======
        gridLayoutWidget_6 = new QWidget(rentalReport);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(110, 170, 251, 160));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_9 = new QLineEdit(gridLayoutWidget_6);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_6->addWidget(lineEdit_9, 1, 1, 1, 1);

        lineEdit_10 = new QLineEdit(gridLayoutWidget_6);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_6->addWidget(lineEdit_10, 2, 1, 1, 1);

        label_31 = new QLabel(gridLayoutWidget_6);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_6->addWidget(label_31, 5, 0, 1, 1);

        label_27 = new QLabel(gridLayoutWidget_6);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_6->addWidget(label_27, 0, 0, 1, 1);

        lineEdit_11 = new QLineEdit(gridLayoutWidget_6);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_6->addWidget(lineEdit_11, 0, 1, 1, 1);

        label_28 = new QLabel(gridLayoutWidget_6);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_6->addWidget(label_28, 3, 0, 1, 1);

        label_30 = new QLabel(gridLayoutWidget_6);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_6->addWidget(label_30, 2, 0, 1, 1);

        lineEdit_12 = new QLineEdit(gridLayoutWidget_6);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 10px;"));

        gridLayout_6->addWidget(lineEdit_12, 3, 1, 1, 1);

        label_29 = new QLabel(gridLayoutWidget_6);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_6->addWidget(label_29, 1, 0, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_6);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("color:black;"));

        gridLayout_6->addWidget(label_32, 6, 0, 1, 1);

<<<<<<< HEAD
        reportStartDate = new QDateTimeEdit(gridLayoutWidget_6);
        reportStartDate->setObjectName("reportStartDate");

        gridLayout_6->addWidget(reportStartDate, 5, 1, 1, 1);

        reportReturnDate = new QDateTimeEdit(gridLayoutWidget_6);
        reportReturnDate->setObjectName("reportReturnDate");

        gridLayout_6->addWidget(reportReturnDate, 6, 1, 1, 1);

        stackedWidget_3->addWidget(report);
        adminSideWidget = new QWidget(admin);
        adminSideWidget->setObjectName("adminSideWidget");
        adminSideWidget->setGeometry(QRect(10, 80, 101, 401));
        adminSideWidget->setStyleSheet(QString::fromUtf8("*{\n"
=======
        dateTimeEdit_5 = new QDateTimeEdit(gridLayoutWidget_6);
        dateTimeEdit_5->setObjectName("dateTimeEdit_5");

        gridLayout_6->addWidget(dateTimeEdit_5, 5, 1, 1, 1);

        dateTimeEdit_6 = new QDateTimeEdit(gridLayoutWidget_6);
        dateTimeEdit_6->setObjectName("dateTimeEdit_6");

        gridLayout_6->addWidget(dateTimeEdit_6, 6, 1, 1, 1);

        stackedWidget_3->addWidget(rentalReport);
        verticalWidget_21 = new QWidget(admin);
        verticalWidget_21->setObjectName("verticalWidget_21");
        verticalWidget_21->setGeometry(QRect(10, 80, 101, 401));
        verticalWidget_21->setStyleSheet(QString::fromUtf8("*{\n"
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
"background-color: #4981B0;}\n"
".QPushButton{\n"
"background-color: Gray;\n"
"border: 2px solid #f1f1f1;\n"
"color:black;\n"
"border-radius:10px;\n"
"}\n"
"\n"
".QPushButton::hover{\n"
"color: black;\n"
"	background-color: rgb(162, 162, 162);\n"
"border: 2px solid #f1f1f1;\n"
"border-radius:10px;\n"
"}"));
<<<<<<< HEAD
        verticalLayout_2 = new QVBoxLayout(adminSideWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        reportBtn = new QPushButton(adminSideWidget);
        reportBtn->setObjectName("reportBtn");

        verticalLayout_2->addWidget(reportBtn);

        addCarBtn = new QPushButton(adminSideWidget);
        addCarBtn->setObjectName("addCarBtn");

        verticalLayout_2->addWidget(addCarBtn);

        editCarBtn = new QPushButton(adminSideWidget);
        editCarBtn->setObjectName("editCarBtn");

        verticalLayout_2->addWidget(editCarBtn);

        adminLogoutBtn = new QPushButton(adminSideWidget);
        adminLogoutBtn->setObjectName("adminLogoutBtn");

        verticalLayout_2->addWidget(adminLogoutBtn);
=======
        verticalLayout_2 = new QVBoxLayout(verticalWidget_21);
        verticalLayout_2->setObjectName("verticalLayout_2");
        adminAddButton = new QPushButton(verticalWidget_21);
        adminAddButton->setObjectName("adminAddButton");

        verticalLayout_2->addWidget(adminAddButton);

        adminEditButton = new QPushButton(verticalWidget_21);
        adminEditButton->setObjectName("adminEditButton");

        verticalLayout_2->addWidget(adminEditButton);

        adminReportButton = new QPushButton(verticalWidget_21);
        adminReportButton->setObjectName("adminReportButton");

        verticalLayout_2->addWidget(adminReportButton);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33

        stackedWidget->addWidget(admin);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
<<<<<<< HEAD
        menubar->setGeometry(QRect(0, 0, 1041, 21));
=======
        menubar->setGeometry(QRect(0, 0, 1150, 21));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

<<<<<<< HEAD
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(2);
        stackedWidget_4->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(0);
=======
        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(2);
        stackedWidget_4->setCurrentIndex(2);
        stackedWidget_3->setCurrentIndex(2);
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
<<<<<<< HEAD
        pass_login->setInputMask(QString());
        close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Cars Available", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Car Rental", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Car name:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Start Date ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
        saveRentalBtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        canelRentalBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
=======
        closeButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_10->setText(QCoreApplication::translate("MainWindow", "Your Car ", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Start Date", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Car details", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
<<<<<<< HEAD
        totalRentalCost->setText(QString());
        cancelRentalBtn->setText(QCoreApplication::translate("MainWindow", "Cancel Rental", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Customer", nullptr));
        customerViewCarBtn->setText(QCoreApplication::translate("MainWindow", "View Cars", nullptr));
        customerViewRentalDetsBtn->setText(QCoreApplication::translate("MainWindow", "View Rental Details ", nullptr));
        customerRentCarBtn->setText(QCoreApplication::translate("MainWindow", "Rent a Car", nullptr));
        customerLogoutBtn->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
=======
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Cancel Rental", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Cars Available", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Car Rental", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Car name:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Start Date ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        customer_label->setText(QCoreApplication::translate("MainWindow", "Customer", nullptr));
        customerViewCarButton->setText(QCoreApplication::translate("MainWindow", "View Cars", nullptr));
        customerViewRentsDetsButton->setText(QCoreApplication::translate("MainWindow", "View Rental Details ", nullptr));
        customerRentButton->setText(QCoreApplication::translate("MainWindow", "Rent a Car", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_39->setText(QCoreApplication::translate("MainWindow", "ADD Customer ", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Phone Number:", nullptr));
<<<<<<< HEAD
        empSaveCustomerBtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        empCancelAddCustomerBtn->setText(QCoreApplication::translate("MainWindow", "Cancel ", nullptr));
=======
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Cancel ", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_45->setText(QCoreApplication::translate("MainWindow", "Edit / Delete User", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "Phone Number:", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
<<<<<<< HEAD
        saveCustomerEditBtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        delCustomerBtn->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        cancelCustomerEditBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
=======
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
#if QT_CONFIG(tooltip)
        edit_car_2->setToolTip(QCoreApplication::translate("MainWindow", "Enter user first name or last name", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_car_2->setText(QString());
        edit_car_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search Customer", nullptr));
        editUser_SearchLabel_3->setText(QString());
        label_58->setText(QCoreApplication::translate("MainWindow", "Payments", nullptr));
        label_59->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_60->setText(QCoreApplication::translate("MainWindow", "Car details", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "Total", nullptr));
<<<<<<< HEAD
        totalPayment->setText(QString());
        paidBtn->setText(QCoreApplication::translate("MainWindow", "Paid", nullptr));
        empAddCustomerBtn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        empEditDelCustomerBtn->setText(QCoreApplication::translate("MainWindow", "Edit/ Delete", nullptr));
        empPaymentsBtn->setText(QCoreApplication::translate("MainWindow", "Payments", nullptr));
        empLogoutBtn->setText(QCoreApplication::translate("MainWindow", "Logut", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Employee", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
=======
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "Paid", nullptr));
        empAddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        empEditDelButton->setText(QCoreApplication::translate("MainWindow", "Edit/ Delete", nullptr));
        empPayButton->setText(QCoreApplication::translate("MainWindow", "Payments", nullptr));
        emp_label->setText(QCoreApplication::translate("MainWindow", "Employee", nullptr));
        admin_label->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_16->setText(QCoreApplication::translate("MainWindow", "ADD Car", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Manufacturer", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
<<<<<<< HEAD
        saveAddCarBtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        edit_carSearch->setToolTip(QCoreApplication::translate("MainWindow", "Enter user first name or last name", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_carSearch->setText(QString());
        edit_carSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search Car", nullptr));
=======
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        edit_car->setToolTip(QCoreApplication::translate("MainWindow", "Enter user first name or last name", nullptr));
#endif // QT_CONFIG(tooltip)
        edit_car->setText(QString());
        edit_car->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search Car", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        editUser_SearchLabel_2->setText(QString());
        label_21->setText(QCoreApplication::translate("MainWindow", "Manufacturer", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        firstButton->setText(QCoreApplication::translate("MainWindow", "<<&First", nullptr));
        previousButton->setText(QCoreApplication::translate("MainWindow", "<&Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "&Next>", nullptr));
        lastButton->setText(QCoreApplication::translate("MainWindow", "&Last>>", nullptr));
<<<<<<< HEAD
        SaveEditCar->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
=======
        Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
        label_25->setText(QCoreApplication::translate("MainWindow", "EDIT CAR", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Rental Report", nullptr));
#if QT_CONFIG(tooltip)
        RegisterFisherSearchLineEdir->setToolTip(QCoreApplication::translate("MainWindow", "Enter user first name or last name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        RegisterFisherSearchLineEdir->setStatusTip(QCoreApplication::translate("MainWindow", "Enter Fisher First name", nullptr));
#endif // QT_CONFIG(statustip)
        RegisterFisherSearchLineEdir->setPlaceholderText(QCoreApplication::translate("MainWindow", "Rentals", nullptr));
        RegisterFisherLabel->setText(QString());
        label_31->setText(QCoreApplication::translate("MainWindow", "Start Date ", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Customer Name", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Return Date", nullptr));
<<<<<<< HEAD
        reportBtn->setText(QCoreApplication::translate("MainWindow", "Report", nullptr));
        addCarBtn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        editCarBtn->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        adminLogoutBtn->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
=======
        adminAddButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        adminEditButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        adminReportButton->setText(QCoreApplication::translate("MainWindow", "Report", nullptr));
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
