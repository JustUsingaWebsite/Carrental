#ifndef USERS_H
#define USERS_H

#include <database.h>
#include <iostream>
#include <QString>

class users
{
public:
    users();
    users(QString, QString, QString, QString);

    void setName(QString);
    QString getName();

    void setUsername(QString);
    QString getUsername();

    void setUserID(QString);
    QString getUserID();

    void setPassword(QString);
    QString getPassword();

    void setRole(QString);
    QString getRole();

    QStringList viewCars(); //wondering if i should add the customer functions in here

    database mydb;

private:
    QString name;
    QString username;
    QString password;
    QString userid;
    QString role;
};

#endif // USERS_H
