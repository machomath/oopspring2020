#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

enum Gender {Female, Male, Do_not_want_to_disclose};
class Student
{
    public:
        Student(string, Gender);
        ~Student();
        Student& printDetails();

    protected:

    private:
        string studentName;
        Gender studentGender;
};

#endif // STUDENT_H
