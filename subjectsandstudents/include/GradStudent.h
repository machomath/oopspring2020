#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H

#include "Student.h"

class GradStudent : public Student
{
    public:
        GradStudent(string, Gender);
        ~GradStudent();
        void attendClass();

    protected:

    private:
};

#endif // GRADSTUDENT_H
