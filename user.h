#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

enum class Role{
Admin,
Teacher,
Student
};




class user{
private:
    string username;
    string password;
    Role role;
public:
    user(string uname, string pass, Role r);
    virtual void displayinfo();
    Role getrole();
    string getusername();
    void setpassword(string newpass);
    bool checkpassword(string password);
    virtual ~user() {}

};



#endif