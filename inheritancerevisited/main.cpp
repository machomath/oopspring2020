#include <iostream>
#include "AA.h"
#include "BB.h"
#include "BB2.h"
#include "CC.h"

using namespace std;

int main()
{

    //AA anObjectOfClassAA(10, 20, 30);
    //cout << anObjectOfClassAA.getAAProtected() << endl;
    //CC anObjectOfClassCC(100, 200, 300, 400);
    //cout << anObjectOfClassCC.getAAPrivate() << endl;
    //cout << anObjectOfClassCC.bbPublic << endl;

    CC bb2Object(11, 23, 47, 67);
    //cout << bb2Object.getAAPrivate() << endl;
    bb2Object.whoAmI();

    return 0;
}
