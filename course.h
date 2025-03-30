#ifndef COURSE_H
#define COURSE_H
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
    void addstudent(student* newstudent);
    void displaystudents();
    string getcoursename();
    string getcoursecode();
};













#endif