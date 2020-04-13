#include "BB2.h"

BB2::BB2(int a, int b, int c)
:AA(a, b, c)
{
    cout << "BB2 Constructor runs" << endl;
}

BB2::~BB2()
{
    //dtor
}

void BB2::whoAmI()
{
    cout << "I am an object of class BB2" << endl;
}
