#include <iostream>
#include "Grand.h"
#include "ParentChildOfGrand.h"
#include "Parent2ChilsOfGrand.h"
#include "ChildClass.h"

using namespace std;

int main()
{
    ChildClass cc(1000, 3000, 6000);
    cc.printPublicGrand()
    Parent2ChilsOfGrand p2cg(1000, 2000, 3000);
    //cout << p2cg.publicGrand << endl;//this is an error
    p2cg.printPublicGrand();
    cout << "--------------------" << endl;
    ParentChildOfGrand pcg(100, 200, 300);
    cout << pcg.publicGrand << endl;
    pcg.printProtectedGrand();
    pcg.printPrivateGrand();

    //Grand gd1(10, 20, 30);
    //cout << gd1.publicGrand << endl;
    //cout << "The following code line is an error since we cannot touch a protected attrib" << endl;
    //cout << gd1.protectedGrand << endl;
    //cout << "The following code line is an error since we cannot touch a private attrib" << endl;
    //cout << gd1.privateGrand << endl;

    cout << "---------------" << endl;
    cout << "Hello world!" << endl;
    return 0;
}
