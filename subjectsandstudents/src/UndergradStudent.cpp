#include "UndergradStudent.h"

UndergradStudent::UndergradStudent(string sn, Gender sg)
:Student(sn, sg)
{
    cout << "Testing: UndergradStudent Constructor Runs" << endl;
}

UndergradStudent::~UndergradStudent()
{
    //dtor
}

void UndergradStudent::attendClass()
{
    cout << "I am an undergrad student attending an on site class" << endl;
}
