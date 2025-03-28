#include "teacher.h"


teacher::teacher(string uname, string pass): user(uname,pass){
}

void teacher::displayinfo(){
    cout << "teacher username:" << username << endl;
}