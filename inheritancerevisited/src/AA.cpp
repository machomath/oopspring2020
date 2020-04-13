#include "AA.h"

AA::AA(int x, int y, int z)
{
    aaPublic = x;
    aaProtected = y;
    aaPrivate = z;
    cout << "AA constructor runs" <<endl;
}

AA::~AA()
{
    //dtor
}

int AA::getAAProtected()
{
    return aaProtected;
}

int AA::getAAPrivate()
{
    return aaPrivate;
}

void AA::whoAmI()
{
    cout << "I am an object of class AA" << endl;
}

