#include "CC.h"

CC::CC(int x, int y, int z, int w)
:BB(x, y, z, w)
{
    cout << "CC Constructor runs" << endl;
}

CC::~CC()
{
    //dtor
}

//void CC::whoAmI()
//{
    //cout << "I am an object of class CC" << endl;
//}
