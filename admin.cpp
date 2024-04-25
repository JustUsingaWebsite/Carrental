#include "admin.h"

admin::admin() {}

admin::admin(QString Name, QString usrname, QString psswd, QString userrole)
    :users(Name, usrname, psswd, userrole){

}
