#ifndef PARENT2CHILSOFGRAND_H
#define PARENT2CHILSOFGRAND_H

#include "Grand.h"

class Parent2ChilsOfGrand : private Grand
{
public:
        Parent2ChilsOfGrand(int, int, int);
        ~Parent2ChilsOfGrand();
        void printProtectedGrand();
        void printPublicGrand();

    protected:

    private:
};

#endif // PARENT2CHILSOFGRAND_H
