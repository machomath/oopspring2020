#include <iostream>
#include "Date1.h"

int Date1::daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string Date1::monthNames[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
Date1::Date1(int d, int m, int y)
{
    cout << "Constructor Runs" << endl;
    try{
        setAll(d, m, y);
    }catch(const char* e){
        throw e;
    }
}

Date1::~Date1()
{
    cout << "Destructor Runs" << endl;
}

int Date1::getDay()
{
    return day;
}
int Date1::getMonth()
{
    return month;
}
int Date1::getYear()
{
    return year;
}
void Date1::setDay(int d)
{
    int leapYearAdj = (year%4 == 0 && month == 2) ? 1 : 0;
    /*
    // The above codeline is the same as this commented if else
    if(year%4 == 0 && month == 2){
        lsLeapYear = 1;
    }else{
        lsLeapYear = 0;
    }
    */

    if(d >=1 && d <=daysPerMonth[month-1]+ leapYearAdj){
        day = d;
    }else{
        throw "Invalid day.";
    }
}
void Date1::setMonth(int m)
{
    if(m >= 1 && m <= 12){
        month = m;
    }else{
        throw "Invalid month.";
    }

}
void Date1::setYear(int y)
{
    if(y >= 0){
        year = y;
    }else{
        throw "Invalid year.";
    }

}

void Date1::setAll(int d, int m, int y)
{
    try{
        setYear(y);
        setMonth(m);
        setDay(d);
    }catch(const char* e){
        throw e;
    }
}

void Date1::printDate()
{
    cout << monthNames[month-1] << " " << day << ", " << year << endl;

}

void Date1::addYear(int y)
{
    if(day == 29 && month == 2 && y % 4 != 0)
    {
        day = 1;
        month = 3;
    }
    year = year+y;
}
void Date1::addMonth(int m)
{
    month = month+m;
}
