#ifndef BB2_H
#define BB2_H
#include <iostream>
#include "AA.h"
using namespace std;

class BB2 : public AA
{
    public:
        BB2(int);
        ~BB2();
        void whoAmI();
    protected:

    private:
};

#endif // BB2_H
