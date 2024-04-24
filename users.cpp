#include "users.h"
#include <QString>

users::users() {}

users::users(QString Name,QString PhoneNum, QString Email, QString usrname, QString psswrd, QString Role ){
    setName(Name);
    setEmail(Email);
    setPhoneNum(PhoneNum);
    setUsername(usrname);
    setPassword(psswrd);
    setRole(Role);
}

void users::setName(QString Name){
    name = Name;
}

QString users::getName(){
    return name;
}

void users::setEmail(QString Email){
    email = Email;
}

QString users::getEmail(){
    return email;
}

void users::setPhoneNum(QString PhoneNum){
    phoneNum = PhoneNum;
}

QString users::getPhoneNum(){
    return phoneNum;
}

void users::setUsername(QString usrname){
    username = usrname;
}

QString users::getUsername(){
    return username;
}

void users::setID(QString userid){
    userid = userID;
}

QString users::getID(){
    return userID;
}

void users::setPassword(QString psswrd){
    password = psswrd;
}

QString users::getPassword(){
    return password;
}
