#include <iostream>
#include "AA.h"
#include "BB1.h"
#include "BB2.h"
#include "CC1.h"

using namespace std;

int main()
{
    AA * anObjPtrArr[5];
    cout << "Lets understand Polymorphism" <<endl;
    anObjPtrArr[0] = new BB1(23);
    anObjPtrArr[1] = new CC1(46);
    anObjPtrArr[2] = new CC1(123);
    anObjPtrArr[3] = new BB1(460);
    anObjPtrArr[4] = new CC1(293);

    for(int i=0; i < 5; i++){
        anObjPtrArr[i]->whoAmI();
    }

    cout << "----------------------------" << endl;
    AA * anObjectPtr;
    BB1 anObj3(47);
    anObjectPtr = & anObj3;
    anObjectPtr->whoAmI();//the following one is the same
    (*anObjectPtr).whoAmI();
    cout << "----------------" << endl;

    CC1 anObj2(50);
    anObjectPtr = & anObj2;

    anObjectPtr->whoAmI();

    //AA anObject(2);//this is an error since we cannot have instances of abstract classes
    //BB1 anObject(2);
    //anObject.whoAmI();
    return 0;
}
