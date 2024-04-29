#include "customer.h"

customer::customer() : User("", "", "", "") {} // Default constructor initializing the base class
customer::customer(QString username, QString password, QString email, QString phone)
    : User(username, password, email, phone) {} // Constructor with parameters initializing the base class
