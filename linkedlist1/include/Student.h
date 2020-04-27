#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
    public:
        Student();
        Student(string, string, int);
        ~Student();
        int getKID();
        void printDetails();

    protected:

    private:
        string fullName;
        string major;
        int kId;
};

#endif // STUDENT_H
