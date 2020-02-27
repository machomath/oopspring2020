#include <iostream>
#include "Time2.h"

using namespace std;

int main()
{
    const int i = 2;
    Time2 anyTime(10, 52, 0, "Good Time");
    cout << anyTime.getSecond() << endl;
    //i += 3;//this is an error
    const Time2 noon(12, 0, 0, "Noon");
    //noon.setHour(10);//this is an error since only const member function can act on const objects
    cout << noon.getName() << endl;
    cout << noon.getHour() << endl;
    cout << "Only const member functions may act on const objects" << endl;
    cout << "Once a a member function is changing the internal attribute it cannot be declared const" << endl;
    cout << "Learning Default values, consts and statics within classes" << endl;
    return 0;
}
