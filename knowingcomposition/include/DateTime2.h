#ifndef DATETIME2_H
#define DATETIME2_H

#include "Date2.h"
#include "Time2.h"


class DateTime2
{
    public:
        DateTime2(Date2, Time2);
        DateTime2(int, int, int, int, int, int, string);
        ~DateTime2();
        Date2 thisDate;
        Time2 thisTime;
        bool operator == (DateTime2);
        bool operator != (DateTime2);
    protected:

    private:


};

#endif // DATETIME2_H
