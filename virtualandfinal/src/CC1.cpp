#include "CC1.h"

CC1::CC1(int a)
:BB2(a)
{
    //ctor
}

CC1::~CC1()
{
    //dtor
}

void CC1::whoAmI()
{
    cout << "An object of CC1-" << x << endl;
}
