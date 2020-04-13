#include "Parent2ChilsOfGrand.h"

Parent2ChilsOfGrand::Parent2ChilsOfGrand(int x, int y, int z)
:Grand(x, y, z)
{
    cout << "Testing: ParentChildOfGrand Runs" << endl;
}

Parent2ChilsOfGrand::~Parent2ChilsOfGrand()
{
    //dtor
}

void Parent2ChilsOfGrand::printProtectedGrand()
{
    cout << "Great we can touch the protected attributes of the parent: " << protectedGrand << endl;
}

void Parent2ChilsOfGrand::printPublicGrand()
{
    cout << "We cannot directly reach the publicGrand through an object of this class" << endl;
    cout << " since the inheritance is of the type protected, but we can access it within the class" << endl;
    cout << publicGrand << endl;
}
