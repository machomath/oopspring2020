#include "BB1.h"

BB1::BB1(int a)
:AA(a)
{
    //cout << "Constructor for BB ran" << endl;
}

BB1::~BB1()
{
    //dtor
}

void BB1::whoAmI()
{
    cout << "An object of BB1-" << x << endl;
}

//void BB1::whoIsBaseClass()
//{
//    cout << "Base class is BB1" << endl;
//}
