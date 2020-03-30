#include "Grand.h"

Grand::Grand(int x, int y, int z)
{
    publicGrand = x;
    protectedGrand = y;
    privateGrand = z;
    cout << "Testing: Grand Runs" << endl;
}

Grand::~Grand()
{

}

void Grand::printPrivateGrand()
{
    cout << "We can reach private attributes into the class by itself or its friends but not in child classes: " << privateGrand << endl;
}
