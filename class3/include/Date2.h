#ifndef DATE2_H
#define DATE2_H

using std::string;
class Date2
{
    public:
        Date2(int, int, int);
        ~Date2();
        int getDay();
        int getMonth();
        int getYear();
        Date2& setAll(int, int, int);
        Date2& setDayPub(int);
        Date2& setMonthPub(int);
        Date2& setYearPub(int);

    protected:

    private:
        int day;
        int month;
        int year;
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

};

#endif // DATE2_H
