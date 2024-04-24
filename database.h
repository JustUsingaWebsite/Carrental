#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QObject>

class database
{
public:
    database();
    ~database();
    bool verifyUser(QString, QString);

private:
    QSqlDatabase mydb;

};

#endif // DATABASE_H
