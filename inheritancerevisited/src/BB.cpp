#include "BB.h"

BB::BB(int x, int y, int z, int w)
:AA(x, y, z)
{
    bbPublic = w;
    cout << "BB Constructor runs" << endl;
}

BB::~BB()
{
    //dtor
}

void BB::whoAmI()
{
    cout << "I am an object of class BB" << endl;
}
