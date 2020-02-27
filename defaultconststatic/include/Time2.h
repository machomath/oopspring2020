#ifndef TIME2_H
#define TIME2_H

#include <iostream>

using namespace std;

class Time2
{
    public:
        Time2(int = 0, int = 0, int = 0, string = "None");//default values
        ~Time2();
        int getHour() const;
        int getMinute() const;
        int getSecond() const;
        string getName() const;
        Time2& setHour(int);
        Time2& setMinute(int);
        Time2& setSecond(int);

    protected:

    private:
        int hour;
        int minute;
        int second;
        const string name;//const object of a class
};

#endif // TIME2_H
