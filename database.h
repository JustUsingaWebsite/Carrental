#ifndef DATABASE_H
#define DATABASE_H

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

    QStringList verifyUser(QString userName, QString password);

private:
    QSqlDatabase db;
    QString userID;
};

#endif // DATABASE_H
