#include "admin.h"

admin::admin() {

}

admin::admin(QString Name,QString PhoneNum, QString Email, QString usrname, QString psswrd, QString Role)
    :users(Name, PhoneNum, Email, usrname, psswrd, Role)
{

}

