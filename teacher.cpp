#include "teacher.h"


teacher::teacher(string uname, string pass): user(uname,pass){
    username = uname;
    password = pass;
}

void teacher::displayinfo(){
    cout << "teacher username:" << username << endl;
}