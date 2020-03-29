#ifndef UNDERGRADSTUDENT_H
#define UNDERGRADSTUDENT_H

#include "Student.h"

class UndergradStudent : public Student
{
    public:
        UndergradStudent(string, Gender);
        ~UndergradStudent();
        void attendClass();

    protected:

    private:
};

#endif // UNDERGRADSTUDENT_H
