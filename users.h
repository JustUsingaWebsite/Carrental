#ifndef USERS_H
#define USERS_H

#include <QString>

class users
{
public:
    users();
    users(QString, QString, QString, QString,QString,QString);

    void setName(QString);
    QString getName();

    void setEmail(QString);
    QString getEmail();

    void setPhoneNum(QString);
    QString getPhoneNum();

    void setUsername(QString);
    QString getUsername();

    void setPassword(QString);
    QString getPassword();

    void setID(QString);
    QString getID();

    void setRole(QString);
    QString getRole();

private:
    QString name;
    QString email;
    QString phoneNum;
    QString username;
    QString password;
    QString userID;
    QString role;
};

#endif // USERS_H
