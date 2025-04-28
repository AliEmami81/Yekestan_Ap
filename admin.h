#ifndef ADMIN_H
#define ADMIN_H
#include "user.h"
#include <vector>
using namespace std;

class admin : public user{
    private:
    vector<user*> users;

    public:
    admin(string username, string password);
    
    void displayinfo() override;
    void displayusers();
    void displaycourses();
    void adduser(user* newuser);
    void removeuser(string username);
    void edituser(string username, string newpass);
 
};


#endif