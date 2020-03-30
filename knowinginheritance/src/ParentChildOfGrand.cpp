#include "ParentChildOfGrand.h"

ParentChildOfGrand::ParentChildOfGrand(int x, int y, int z)
:Grand(x, y, z)
{
    cout << "Testing: ParentChildOfGrand Runs" << endl;
}

ParentChildOfGrand::~ParentChildOfGrand()
{
    //dtor
}

void ParentChildOfGrand::printProtectedGrand()
{
    cout << "Great we can touch the protected attributes of the parent: " << protectedGrand << endl;
}
