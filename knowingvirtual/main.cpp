#include <iostream>
#include "AA.h"
#include "BB1.h"
#include "BB2.h"
#include "CC1.h"

using namespace std;

int main()
{
    AA * anArray[5];
    anArray[0] = new BB1(0);
    anArray[1] = new CC1(1);
    anArray[2] = new BB2(2);
    anArray[3] = new BB2(3);
    anArray[4] = new BB1(4);

    for(int i = 0; i < 5; i++){
        (*anArray[i]).whoAmI();
    }

    //BB1 anObject(5);
    //anObject.whoAmI();
    //anObject.whoIsBase();
    return 0;
}
