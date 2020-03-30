#ifndef PARENTCHILDOFGRAND_H
#define PARENTCHILDOFGRAND_H
#include <iostream>
#include "Grand.h"
using namespace std;

class ParentChildOfGrand : public Grand
{
    public:
        ParentChildOfGrand(int, int, int);
        ~ParentChildOfGrand();
        void printProtectedGrand();

    protected:

    private:
};

#endif // PARENTCHILDOFGRAND_H
