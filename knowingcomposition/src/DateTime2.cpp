#include "DateTime2.h"

DateTime2::DateTime2(Date2 dt, Time2 tm)
:thisDate(dt),thisTime(tm)
{
    cout << "Test message from constructor - 1" << endl;
}

DateTime2::DateTime2(int d, int m, int y, int h, int i, int s, string n)
:thisDate(d, m, y), thisTime(h, i, s, n)
{
    cout << "Test message from constructor - 2" << endl;
    //Date2 tmpDate(d, m, y);
    //thisDate = tmpDate;
    //Time2 tmpTime(h, i, s, n);
    //thisTime = tmpTime;
}

DateTime2::~DateTime2()
{
    //dtor
}

bool DateTime2::operator == (DateTime2 rhs)
{
    if(thisDate == rhs.thisDate && thisTime == rhs.thisTime){
        return true;
    }else{
        return false;
    }
}
