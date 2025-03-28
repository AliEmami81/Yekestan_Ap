#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class user{
protected:
    string username;
    string password;
public:
    user(string uname, string pass);
    virtual void displayinfo();
    string getusername();
    bool checkpassword(string password);
    void setpassword(string newpass);
    virtual ~user() {}

};



#endif