#include "GradStudent.h"

GradStudent::GradStudent(string sn, Gender sg)
:Student(sn, sg)
{
    cout << "Testing: GradStudent Constructor Runs" << endl;
}

GradStudent::~GradStudent()
{
    //dtor
}

void GradStudent::attendClass()
{
    cout << "I am a grad student attending an on line class" << endl;
}
