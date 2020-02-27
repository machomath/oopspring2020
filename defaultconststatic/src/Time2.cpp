#include "Time2.h"

Time2::Time2(int h, int m, int s, string n)
:name(n)//this is how we need to initialize the const members
{
    try{
        setHour(h).setMinute(m).setSecond(s);
    }catch(const char * e){
        throw e;
    }
}

Time2::~Time2()
{

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
