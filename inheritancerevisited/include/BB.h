#ifndef BB_H
#define BB_H
#include <iostream>
#include "AA.h"
using namespace std;

class BB : public AA
{
    public:
        BB(int, int, int, int);
        ~BB();
        int bbPublic;
        void whoAmI();

    protected:

    private:
};

#endif // BB_H
