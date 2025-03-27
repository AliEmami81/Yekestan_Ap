#include "student.h"

student::student(string uname, string pass) : user(uname,pass) {
   username = uname;
   password = pass; 
}

void student::displayinfo(){
    cout << "student usernamne" << username << endl;
}
