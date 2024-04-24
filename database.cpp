#include <database.h>

database::database() {
    //mydb = QSqlDatabase::addDatabase("QSQLITE");
    //mydb.setDatabaseName("C:/sqlite/MyFirstDatabase.db");

    mydb = QSqlDatabase::addDatabase("QMYSQL");
    //setting connection credentials
    mydb.setHostName("localhost");
    mydb.setUserName("root");
    mydb.setPassword("");
    mydb.setDatabaseName("car_rental_system");

    //exception handling
    try
    {
        if(mydb.open())
        {
            qDebug() << "Successfully connected to database!";

        }
        else
        // Lets the program know that it didnt connect to the server
        {
            QString error = mydb.lastError().text();
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

database::~database(){
    //mydb.close();
    //QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);

    mydb.close();
    QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );  //remove database
    return;
}

QStringList database::verifyUser(QString name, QString pass){
    // query the database
   /* if (name != "" && pass != ""){return true;}
    return false; */
    QSqlQuery qry;
    qry.prepare( "SELECT users.user_id, users.name, users.password, "
                "users.username, roles.role_name, users.role_id "
                "FROM users LEFT JOIN roles ON users.role_id = roles.role_id "
                "WHERE username = :uname AND password = :pword" );
    qry.bindValue(":uname", name);
    qry.bindValue(":pword", pass);

    if( !qry.exec() ){
        qDebug() <<"Login query failed "<< mydb.lastError();
    }

    QStringList result;

    if(qry.size() == 1){
        while( qry.next() ){
            result << qry.value("user_id").toString();
            result << qry.value("name").toString();
            result << qry.value("password").toString();
            result << qry.value("username").toString();
            result << qry.value("role_name").toString();
            result << qry.value("role_id").toString();
        }

    }
    return result;
}
