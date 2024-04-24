#include "admin.h"

admin::admin() {

}

admin::admin(QString Name, QString usrname, QString psswrd, QString Role)
    :users(Name, usrname, psswrd, Role)
{

}

