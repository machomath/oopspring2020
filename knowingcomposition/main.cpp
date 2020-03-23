#include <iostream>
#include "Time2.h"
#include "Date2.h"
#include "DateTime2.h"


using namespace std;

int main()
{
    Time2 evening(17, 0, 0, "evening");
    Date2 today(23, 3, 2020);
    DateTime2 todayEvening(today, evening);

    DateTime2 anotherDay(23, 3, 2020, 17, 0, 0, "evening");
    anotherDay.thisDate.printDate();
    cout << " " ;
    anotherDay.thisTime.printTime();
    cout << endl;
    cout << "----------------" <<endl;
    todayEvening.thisDate.printDate();
    cout << " " ;
    todayEvening.thisTime.printTime();
    cout << endl;
    if(todayEvening == anotherDay){
        cout << "They are same" << endl;
    }else{
        cout << "They are different" << endl;
    }

    cout << endl <<"Below is the material before the spring break" << endl;
    Time2 noon(12, 0, 0);
    noon.setAll(13, 20, 34, "Noon");
    Date2 newYear(1, 1, 2020);

    DateTime2 newYearNoon(newYear, noon);

    newYearNoon.thisDate.printDate();
    cout << " ";
    newYearNoon.thisTime.printTime();
    cout << endl;

    DateTime2 anotherDateTime(29, 2, 2020, 3, 50, 15, "anotherDateTime");
    anotherDateTime.thisDate.printDate();
    cout << " ";
    anotherDateTime.thisTime.printTime();
    cout << endl;

    cout << "Hello world!" << endl;
    return 0;
}
