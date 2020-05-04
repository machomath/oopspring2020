#include "Faculty.h"

Faculty::Faculty()
{
    //ctor
}

Faculty::~Faculty()
{
    //dtor
}

Faculty::Faculty(string n, string m, int k, int r)
{
    fullName = n;
    major = m;
    kId = k;
    roomNumber = r;
}

int Faculty::getKID()
{
    return kId;
}

void Faculty::printDetails()
{
    cout << "Name: " << fullName << endl
        << "Major: " << major << endl
        << "KID: " << kId << endl
        << "Room Number: "<< roomNumber << endl << endl;

}
