#include "users.h"

users::users() {}

users::users(QString Name, QString usrname, QString psswd, QString userrole)
{
    setName(Name);
    setUsername(usrname);
    setPassword(psswd);
    setRole(userrole);
}

void users::setName(QString Name){
    name = Name;
}
QString users::getName(){
    return name;
}

void users::setUsername(QString usrname){
    username = usrname;
}
QString users::getUsername(){
    return username;
}

void users::setUserID(QString userID){
    userid = userID;
}
QString users::getUserID(){
    return userid;
}

void users::setPassword(QString psswd){
    password = psswd;
}
QString users::getPassword(){
    return password;
}

void users:: setRole(QString userrole){
    role = userrole;
}
QString users::getRole(){
    return role;
}
