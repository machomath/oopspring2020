#include <iostream>
#include "Student.h"
#include "GradStudent.h"
#include "UndergradStudent.h"

using namespace std;

int main()
{
    UndergradStudent ugstu1("Alice", Female);
    ugstu1.printDetails();
    cout << "-----------------" << endl;
    GradStudent gstu1("Sam Lewis", Male);
    gstu1.printDetails();
    cout << "-----------------" << endl;
    ugstu1.attendClass();
    gstu1.attendClass();
    cout << "-----------------" << endl;
    Student stu1("Frank", Male);
    Student stu2("Anna", Female);
    stu1.printDetails();
    cout << "-----------------" << endl;
    stu2.printDetails();
    return 0;
}
