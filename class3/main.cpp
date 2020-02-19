#include <iostream>
#include "Date2.h"

using namespace std;
using std::string;

int main()
{
    try{
        Date2 myBD(29, 2, 2020);
        myBD.setAll(28, 2, 2021).setAll(30, 3, 2022);
        //myBD.setDayPub(21).setMonthPub(11).setYearPub(2020);
        cout << myBD.getYear() << endl;
    }catch(const char * e){
        cerr << e << endl;
    }



}
