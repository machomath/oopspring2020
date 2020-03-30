#include <iostream>
#include "Grand.h"
#include "ParentChildOfGrand.h"

using namespace std;

int main()
{
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
