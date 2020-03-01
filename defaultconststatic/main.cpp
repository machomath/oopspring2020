#include <iostream>
#include "Time2.h"

using namespace std;

int main()
{
    cout << "Number of Time2 Objects are: " <<Time2::getCounter() << endl;
    //Time2::counter = 10; //this is an error since private variable is directly accessed
    {
        const int i = 2;
        Time2 anyTime(10, 52, 0, "Good Time");
        cout << "Number of Time2 Objects are: " <<anyTime.getCounter() << endl;
        cout << anyTime.getSecond() << endl;
    }

    cout << "Number of Time2 Objects are: " << Time2::getCounter() << endl;
    //i += 3;//this is an error
    const Time2 noon(12, 0, 0, "Noon");
    Time2 evening(17, 0, 0, "Evening");
    cout << "Number of Time2 Objects are: " <<noon.getCounter() << endl;
    cout << "Number of Time2 Objects are: " <<evening.getCounter() << endl;
    cout << "=======================" << endl;
    //noon.setHour(10);//this is an error since only const member function can act on const objects
    cout << noon.getName() << endl;
    cout << noon.getHour() << endl;
    cout << "Only const member functions may act on const objects" << endl;
    cout << "Once a a member function is changing the internal attribute it cannot be declared const" << endl;
    cout << "Learning Default values, consts and statics within classes" << endl;
    return 0;
}
