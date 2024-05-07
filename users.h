#ifndef USERS_H
#define USERS_H

#include <database.h>
#include <QString>

<<<<<<< HEAD
class User {
private:
    QString userID;
    QString name;
    QString username;
    QString password;
    QString email;
    QString phone;

    enum Role_type{admin, employee, customer};
    Role_type Role;

public:
    User(const QString& username, const QString& password, const QString email, const QString phone)
        : username(username), password(password), email(email), phone(phone) {}

    // Getters
    QString getUsername() const { return username; }
    QString getName() const {return name;}
    QString getUserID() const { return userID; }
    QString getPassword() const { return password; }
    QString getEmail() const { return email; }
    QString getPhone() const { return phone; }

    // Setters
    void setUsername(QString);
    void setName(QString);
    void setUserID(QString);
    void setPassword(QString);
    void setEmail(QString);
    void setPhone(QString);

    //misc func's
    Role_type getRole() {return Role;}
=======
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
>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
};

#endif // USERS_H
