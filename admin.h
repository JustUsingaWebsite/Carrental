#ifndef ADMIN_H
#define ADMIN_H

#include <users.h>

class admin : public users
{
public:
    admin();
    admin(QString Name,QString PhoneNum, QString Email, QString usrname, QString psswrd, QString Role);


};

#endif // ADMIN_H
