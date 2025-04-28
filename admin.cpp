#include "admin.h"

admin::admin(string uname,string pass): user(uname,pass, Role::Admin){
}

void admin::displayinfo(){
    cout << "admin username:" << getusername() << endl;
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
for ( auto &a : users){
    if ( a->getusername() == username){
        a->setpassword(newpass);
        cout << "password for user" << username << "was changed." << endl;
        return;
    }
}
cout << "user with username" << username << "was not found" << endl;

}


void admin::removeuser(string username) {
    for (int i = 0; i < users.size(); i++) {
        if (users[i]->getusername() == username) {
            delete users[i];
            users.erase(users.begin() + i);  
            cout << "User " << username << " removed." << endl;
            return;
        }
    }
    cout << "User " << username << " not found." << endl;
}

void admin::displaycourses(){
    cout << "list of courses:" << endl;
    for (const auto &b : courses)

}