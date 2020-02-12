#include <iostream>
#include "date1.h"

using namespace std;
using std::string;

int main()
{
    try{
        {
            Date1 x(28, 2, 2020);
            x.addYear(5);
            x.printDate();

        }
        cout << "Out of the block" << endl;
        //x.setAll(13, 4, 2019);
        //Date1 bob(15, 7, 1999);
        //let's set the inner attributes of x which is of the kind Date1
        //x.setDay(300);
        //x.setMonth(500);
        //x.setYear(-1);

        //cout << x.getMonth() << "-" << x.getDay() << "-" << x.getYear() << endl;

        //cout << "Great we are making our first class today!" << endl;
    return 0;
    } catch(const char* e){
        cerr << e;
    }

}
