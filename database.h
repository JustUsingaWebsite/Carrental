#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QMessageBox>
#include <tuple>

#include <QImageWriter>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QBuffer>
#include <QtSql/QSqlQueryModel>
#include <QImageWriter>
#include <QImageReader>
#include <QImage>
#include <qmessagebox.h>

class database
{
public:
    database();
    ~database();
<<<<<<< HEAD
    QStringList verifyUserMySQL(QString, QString);
    QStringList verifyUserSQLITE(QString, QString);
    void initMYSQL();
    void initSQLITE();

    bool MakeCustomer(std::vector<QString>);
    bool MakePayment(int customerid, int employeeid, QDateTime val, int total);
    std::map<QString, QVariant> getUser(int userid);
    std::vector<std::map<QString, QVariant>> getUsers();
    bool AddCar(QString manufacturer, QString model, int year, QString color, int adminID);
    bool UpdateUser(int userid, QString name, QString email, QString phone, QString username, QString password);
    bool DeleteUser(int userid);

    std::vector<std::map<QString, QVariant>> getInventory();
    bool UpdateCar(int, QString, QString, int, QString, int);
    std::map<QString, QVariant> getUserRentedCar(int userId);
    bool RentCar(std::tuple<int, int, QDateTime, QDateTime, int>);
    std::tuple<bool, QString> cancelRental(int);

    std::vector<std::map<QString, QVariant>> GetRentals();
    void updateRentalHistory();
    void UpdateData();
private:
    QSqlDatabase mydb;

=======

    QStringList verifyUser(QString userName, QString password);

private:
    QSqlDatabase db;
    QString userID;
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
};

#endif // DATABASE_H
