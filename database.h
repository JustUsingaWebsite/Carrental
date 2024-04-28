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
    QStringList verifyUserMySQL(QString, QString);
    QStringList verifyUserSQLITE(QString, QString);
    void initMYSQL();
    void initSQLITE();

    std::vector<std::map<QString, QVariant>> getInventory();

private:
    QSqlDatabase mydb;

};

#endif // DATABASE_H
