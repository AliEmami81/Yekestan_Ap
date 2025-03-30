#include "course.h"


course::course(string name, string code){
}

void course::showstudent(student* student){
    students.push_back(student);
    cout << "Student " << student->getusername() << coursename << endl;
}

void course::displaystudents(){
    cout << "students in" << coursename << "are" << endl;
    for (student* student: students) {
        cout << " -" << student -> getusername() << endl;
    }
}

void course::addstudent(student* newStudent) {
    students.push_back(newStudent);
    cout << "Student " << newStudent->getusername() << " added to " << coursename << endl;
}

string course::getcoursename(){
    return coursename;
}

string course::getcoursecode(){
    return coursecode;
}