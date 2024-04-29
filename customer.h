#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <users.h>

class customer: public User
{
public:
    customer();
    customer(QString, QString, QString, QString);
};

#endif // CUSTOMER_H
