#include "Time2.h"

int Time2::counter = 0;
Time2::Time2(int h, int m, int s, string n)
:name(n)//this is how we need to initialize the const members
{
    counter++;
    try{
        setHour(h).setMinute(m).setSecond(s);
    }catch(const char * e){
        throw e;
    }
}

Time2::~Time2()
{
    counter--;
}

int Time2::getHour() const
{
    return hour;
}

int Time2::getMinute() const
{
    return minute;
}

int Time2::getSecond() const
{
    return second;
}

string Time2::getName() const
{
    return name;
}

int Time2::getCounter()
{
    return counter;
}

Time2& Time2::setHour(int h)
{
    if(h >=0 && h <=23){
        hour = h;
        return *this;
    }else{
        throw "Invalid Hour";
    }

}

Time2& Time2::setMinute(int m)
{
     if(m >=0 && m <=59){
        minute = m;
        return *this;
    }else{
        throw "Invalid Minute";
    }
}

Time2& Time2::setSecond(int s)
{
     if(s >=0 && s <=59){
        second = s;
        return *this;
    }else{
        throw "Invalid Second";
    }
}

Time2& Time2::setName(string n)
{
    name = n;
    return *this;
}

Time2& Time2::setAll(int h, int i, int s, string n)
{
    (*this).setHour(h).setMinute(i).setSecond(s).setName(n);
    return *this;
}

Time2& Time2::printTime()
{
    cout << hour << ":" << minute << ":" << second;
    return *this;
}

bool Time2::operator == (Time2 rhs)
{
    if(hour == rhs.getHour() && minute == rhs.getMinute() && second == rhs.getSecond()){
        return true;
    }else{
        return false;
    }
}
