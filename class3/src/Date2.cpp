#include <iostream>
#include "Date2.h"

using namespace std;

Date2::Date2(int d, int m, int y)
{
    try{
        setAll(d, m, y);
    }catch(const char * e){
        throw e;
    }
}

Date2::~Date2()
{

}

int Date2::getDay()
{
    return day;
}
int Date2::getMonth()
{
    return month;
}
int Date2::getYear()
{
    return year;
}

void Date2::setDay(int d)
{
    /*
    int leapAdj;
    if(year%4 == 0 && month == 2 ){
        leapAdj = 1;
    }else{
        leapAdj = 0;
    }
    The above if else block can be summarized into following code line
    */
    int leapAdj = (year%4 == 0 && month == 2 ) ? 1 : 0;

    if(d >= 1 && d<=(daysInMonth[month-1] + leapAdj)){
        day = d;
    }else{
        throw "Wrong day";
    }
}
void Date2::setMonth(int m)
{
    if(m>=1 && m<=12){
        month = m;
    }else{
        throw "Wrong month";
    }
}
void Date2::setYear(int y)
{
    year = y;
}

Date2& Date2::setAll(int d, int m, int y)
{
    try{
        setYear(y);
        setMonth(m);
        setDay(d);
        return *this;
    }catch(const char * e){
        throw e;
    }

}

Date2& Date2::setDayPub(int d)
{
    setDay(d);
    return *this;
}

Date2& Date2::setMonthPub(int m)
{
    int leapAdj = (year%4 == 0 && m == 2 ) ? 1 : 0;
    if(m >= 1 && m <= 12 && day <= daysInMonth[m-1] + leapAdj){
        month = m;
        return *this;
    }else{
        throw "Invalid Month";
    }

}
/*
Date2& Date2::setYearPub(int y)
{
    try{
        setYear(y);
        setMonth(month);
        setDay(day);
        return *this;
    }catch(const char* e){
        throw e;
    }
}
*/

Date2& Date2::setYearPub(int y)
{
    if(month == 2 && day == 29 && y%4 != 0){
        throw "Invalid year";
    }else{
        year = y;
        return *this;
    }
}

bool Date2::operator ==(Date2 rhs)
{
     if(day == rhs.getDay() && month ==rhs.getMonth() && year == rhs.getYear()){
        return true;
     }else{
        return false;
     }

}

bool Date2::operator !=(Date2 rhs)
{
    return !(*this == rhs);
}

Date2& Date2::operator ++()
{
    ++day;
    return *this;
}

