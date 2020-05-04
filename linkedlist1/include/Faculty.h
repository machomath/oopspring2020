#ifndef FACULTY_H
#define FACULTY_H

#include <iostream>

using namespace std;

class Faculty
{
    public:
        Faculty();
        Faculty(string, string, int, int);
        ~Faculty();
        int getKID();
        void printDetails();

    protected:

    private:
        string fullName;
        string major;
        int kId;
        int roomNumber;
};

#endif // FACULTY_H
