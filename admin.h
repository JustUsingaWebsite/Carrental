#ifndef ADMIN_H
#define ADMIN_H

#include <users.h>

<<<<<<< HEAD
class admin : public User
{
public:
    admin();
    admin(QString, QString, QString, QString);

    QStringList generateReport();
    QString addCar();
    QString editCar();
=======
class admin : public users
{
public:
    admin();
    admin(QString Name,QString PhoneNum, QString Email, QString usrname, QString psswrd, QString Role);


>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
};

#endif // ADMIN_H
