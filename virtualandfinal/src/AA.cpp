#include "AA.h"

AA::AA(int a)
{
    x = a;
    //cout << "Constructor for AA ran, init x" << endl;
}

AA::~AA()
{
    //dtor
}

void AA::whoIsBaseClass()
{
    cout << "Base class is AA" << endl;
}
//This is a pure virtual function
//void AA::whoAmI()
//{
//    cout << "An object of AA" << endl;
//}
