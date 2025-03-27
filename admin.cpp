#include "admin.h"

admin::admin(string uname,string pass): user(uname,pass){
    username = uname;
    password = pass;
}

void admin::displayinfo(){
    cout << "admin username:" << username << endl;
}

void admin::displayusers(){
    cout << "list of users are:" << endl;
    for (const auto &a: users){
        cout << "- " << a->getusername() << endl;
    
    }

}

void admin::adduser(user* newuser){
    users.push_back(newuser);
    cout << "user" << newuser->getusername() << "user added." << endl;

}


void admin::edituser(string username, string newpass){



}


void admin::removeuser(string username){



}