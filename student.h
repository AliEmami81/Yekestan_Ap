#ifndef STUDENT.H
#define STUDENT.H
#include "user.h"

class student : public user{

public:
    student(string username, string password);
    void displayinfo() override;

};

#endif