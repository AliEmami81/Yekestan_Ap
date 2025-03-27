#ifndef TEACHER.H
#define TEACHER.H
#include "user.h"

class teacher : public user{

public:
    teacher(string username, string password);
    void displayinfo() override;
};


#endif