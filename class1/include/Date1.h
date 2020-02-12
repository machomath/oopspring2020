#ifndef DATE1_H
#define DATE1_H

using namespace std;
//using std::string;

class Date1
{
    public:
        Date1(int, int, int);
        ~Date1();
        int getDay();
        int getMonth();
        int getYear();
        void setAll(int, int, int);
        void printDate();
        void addYear(int);
        void addMonth(int);

    protected:

    private:
        int day;
        int month;
        int year;
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int static daysPerMonth[];
        string static monthNames[];

};

#endif // DATE1_H
