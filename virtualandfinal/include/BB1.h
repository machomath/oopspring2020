#ifndef BB1_H
#define BB1_H
#include <iostream>
#include "AA.h"

using namespace std;

//once a class is final we cannot inherit from it
class BB1 final : public AA
{
    public:
        BB1(int);
        ~BB1();
        void whoAmI();
        //void whoIsBaseClass(); //this is an error since we cannot override a final function

    protected:

    private:
};

#endif // BB1_H
