#ifndef TEACHER_H
#define TEACHER_H
#include "user.h"

class teacher : public user{

public:
    teacher(string username, string password);
    void displayinfo() override;
};


#endif