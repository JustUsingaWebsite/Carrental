#ifndef ADMIN_H
#define ADMIN_H

#include <users.h>

class admin : public users
{
public:
    admin();
    admin(QString, QString, QString, QString, QString);

    QString generateReport(QString, QString);
};

#endif // ADMIN_H
