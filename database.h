#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QMessageBox>

class database
{
public:
    database();
    ~database();
    QStringList verifyUser(QString, QString);

private:
    QSqlDatabase mydb;

};

#endif // DATABASE_H
