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
        static int getCounter();
        Time2& setHour(int);
        Time2& setMinute(int);
        Time2& setSecond(int);
        Time2& setName(string);
        Time2& setAll(int, int, int, string);
        Time2& printTime();
        bool operator == (Time2);

    protected:

    private:
        int hour;
        int minute;
        int second;
        string name;//const object of a class
        static int counter;

};

#endif // TIME2_H
