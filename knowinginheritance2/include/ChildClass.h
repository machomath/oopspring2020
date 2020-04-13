#ifndef CHILDCLASS_H
#define CHILDCLASS_H

#include "Parent2ChilsOfGrand.h"

class ChildClass : public Parent2ChilsOfGrand
{
    public:
        ChildClass(int, int, int);
        ~ChildClass();
        void printPublicGrandInChild();
        void printPublicGrand();

    protected:

    private:
};

#endif // CHILDCLASS_H
