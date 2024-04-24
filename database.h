#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QStringList>

class database
{
public:
    database();
    ~database();

    QStringList verifyUser(QString userName, QString password);

private:
    QSqlDatabase db;
};

#endif // DATABASE_H
