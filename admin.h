#ifndef ADMIN.H
#define ADMIN.H
#include "user.h"

class admin : public user{
public:
    admin(string username, string password);
    void displayinfo() override;
};


#endif