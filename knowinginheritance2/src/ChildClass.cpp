#include "ChildClass.h"

ChildClass::ChildClass(int x, int y, int z)
:Parent2ChilsOfGrand(x, y, z)
{
    cout << "Testing: ChildClass constructor runs" << endl;
}

ChildClass::~ChildClass()
{
    //dtor
}

void ChildClass::printPublicGrandInChild()
{
    //cout << publicGrand << endl; //this is an error
}

void ChildClass::printPublicGrand()
{
    cout << "Print Nothing" << endl;
}
