#include "user.h"

user::user(string uname,string pass){
    username = uname;
    password = pass;
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