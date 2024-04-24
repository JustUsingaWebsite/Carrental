#include "database.h"
#include <QDebug>
#include <QMessageBox>

database::database() {
    db = QSqlDatabase::addDatabase("QMYSQL");
    //setting connection credentials
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("car_rental_system");

    //exception handling
    try
    {
        if(db.open())
        {
            qDebug() << "Successfully connected to database!";

        }
        else
        // Lets the program know that it didnt connect to the server
        {
            QString error = db.lastError().text();
            throw error.toStdString().c_str();
        }


    }
    catch(const char * message)  //catches the exception as a char pointer
    {
        QMessageBox messagebox;
        messagebox.about(NULL,"Connection to database failed!",message);
        qFatal("Connection to database failed!");
    }
}

database::~database()
{
    db.close();
    QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );  //remove database
    return;
}

QStringList database::verifyUser(QString userName, QString password)
{
    QSqlQuery qry;
    qry.prepare("SELECT users.id, users.name, users.password, "
                "users.username, roles.role_name "
                "FROM users LEFT JOIN roles ON users.role_id = roles.role_id "
                "WHERE username = :uname AND password = :pword" );
    qry.bindValue(":uname", userName);
    qry.bindValue(":pword", password);

    if (!qry.exec()) {
        qDebug() << "Login query failed" << qry.lastError();
        return QStringList(); // Return an empty list on query failure
    }

    QStringList result;

    if (qry.next()) {
        result << qry.value("user_id").toString();
        result << qry.value("name").toString();
        result << qry.value("username").toString();
        result << qry.value("password").toString();
        result << qry.value("role_id").toString();
    }

    return result;
}

