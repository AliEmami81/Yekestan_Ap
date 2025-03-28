#include "user.h"

user::user(string uname,string pass){
}

void user::displayinfo(){
cout << "username" << username << endl;
}

string user::getusername(){
return username;
}

bool user::checkpassword(string pass){
    return password == pass;
}

void user::setpassword(string newpass){
    password = newpass;
}