#include "admin.h"

admin::admin(string uname,string pass): user(uname,pass){
    username = uname;
    password = pass;
}

void admin::displayinfo(){
    cout << "admin username:" << username << endl;
}

void admin::displayusers(){


}

void admin::adduser(user* newuser){


}


void admin::edituser(string username, string newpass){



}


void admin::removeuser(string username){



}