#include "Student.h"

Student::Student(string sn, Gender sg)
{
    studentName = sn;
    studentGender = sg;
    cout << "Testing: Student Constructor Runs" << endl;
}

Student::~Student()
{
    //dtor
}

Student& Student::printDetails()
{
    cout << "Name: " << studentName << endl;
    cout << "Gender: ";
    switch(studentGender){
    case 0 :
        cout << "Female" << endl;
        break;
    case 1 :
        cout << "Male" << endl;
        break;
    case 2 :
        cout << " Do not want to disclose" << endl;
        break;
    }
}
