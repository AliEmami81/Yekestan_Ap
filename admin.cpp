#include "admin.h"

admin::admin(string uname,string pass): user(uname,pass){
    username = uname;
    password = pass;
}

void admin::displayinfo(){
    cout << "admin username:" << username << endl;
}