#include <iostream>
#include "Date2.h"

using namespace std;
using std::string;

int main()
{
    //int i = 10;
    //cout << ++i << endl;
    //cout << i << endl;
    try{
        Date2 myBD(12, 2, 2020);
        cout << (++myBD).getDay() << endl;
        myBD.setAll(28, 2, 2021).setAll(30, 3, 2022);
        //myBD.setDayPub(21).setMonthPub(11).setYearPub(2020);
        myBD.setDayPub(14).setMonthPub(10).setYearPub(2000);

        cout << (myBD).getMonth() << " - " << (myBD).getDay() << " - " << (myBD).getYear() << endl;
    }catch(const char * e){
        cerr << e << endl;
    }



}
