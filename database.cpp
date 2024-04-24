#include "database.h"

database::database() {
    //mydb = QSqlDatabase::addDatabase("QSQLITE");
    //mydb.setDatabaseName("C:/sqlite/MyFirstDatabase.db");
}

database::~database(){
    //mydb.close();
    //QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
}

bool database::verifyUser(QString name, QString pass){
    // query the database
    if (name != "" && pass != ""){return true;}
    return false;
}
