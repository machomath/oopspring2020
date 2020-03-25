#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student stu1("Frank", Male);
    Student stu2("Anna", Female);
    stu1.printDetails();
    cout << "-----------------" << endl;
    stu2.printDetails();
    return 0;
}
