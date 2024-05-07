#include "admin.h"

<<<<<<< HEAD
admin::admin() : User("", "", "", ""){}
admin::admin(QString username, QString pass, QString email, QString phone)
    :User(username, pass, email, phone){
}
=======
admin::admin() {

}

admin::admin(QString Name,QString PhoneNum, QString Email, QString usrname, QString psswrd, QString Role)
    :users(Name, PhoneNum, Email, usrname, psswrd, Role)
{

}

>>>>>>> e1e7b2ac5259d0328859f1261550dc6348ad5e33
