#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <users.h>

class employee : public users
{
public:
    employee();
    employee(QString, QString, QString, QString);

    bool payments();
    QString addCustomer();
    QString editDelCustomer();
};

#endif // EMPLOYEE_H
