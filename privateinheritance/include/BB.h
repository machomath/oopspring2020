#ifndef BB_H
#define BB_H
#include "AA.h"

#include <iostream>
using namespace std;

class BB : private AA
{
    public:
        BB(int);
        ~BB();
        void printAAPublic();

    protected:

    private:
};

#endif // BB_H
