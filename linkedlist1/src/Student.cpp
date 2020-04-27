#include "Student.h"

Student::Student()
{
    //ctor
}

Student::~Student()
{
    //dtor
}

Student::Student(string n, string m, int k)
{
    fullName = n;
    major = m;
    kId = k;
}

int Student::getKID()
{
    return kId;
}

void Student::printDetails()
{
    cout << "Name: " << fullName << endl
        << "Major: " << major << endl
        << "KID: " << kId << endl << endl;

}
