#include <iostream>
#include "Date2.h"

using namespace std;
using std::string;

int main()
{
    //int i = 10;
    //cout << i++ << endl;
    //cout << i << endl;
    try{
        //int i = 20;//we were learning scope
        //cout << i << endl; //we were learning scope
        Date2 myBD(28, 2, 2020);
        cout << myBD << endl;
        cout << "++++++++++++++++" << endl;
        //myBD.printShort();//SInce not a member function so cannot be used like this
        printShort(myBD);
        cout << "----------------" << endl;
        myBD = myBD + 10;
        myBD.printDate().setYearPub(2020).printDate();
        ((++myBD).printDate()++).printDate();
        cout << "----------------" << endl;
        myBD.printDate();
        cout << "================" << endl;
        (++(++myBD).printDate()).printDate();
        //cout << (++myBD).getDay() << endl;
        cout << "================" << endl;
        myBD.setAll(28, 2, 2021).setAll(30, 3, 2022);
        //myBD.setDayPub(21).setMonthPub(11).setYearPub(2020);
        myBD.setDayPub(14).setMonthPub(10).setYearPub(2000);

        cout << (myBD).getMonth() << " - " << (myBD).getDay() << " - " << (myBD).getYear() << endl;
    }catch(const char * e){
        cerr << e << endl;
    }
    {
        //cout << i << endl;//we were learning scope
    }



}
