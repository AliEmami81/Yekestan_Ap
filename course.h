#ifndef COURSE.H
#define COURSE.H
#include <iostream>
#include <vector>
#include "student.h"
using namespace std;

class course{
    private:
    string coursename;
    string coursecode;
    vector<student*> students;

    public:
    course(string name, string code);
    void showstudent(student* student);
    void displaystudents();
    string getcoursename();
    string getcoursecode();
};













#endif