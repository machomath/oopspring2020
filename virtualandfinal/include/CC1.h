#ifndef CC1_H
#define CC1_H
#include <iostream>
#include "BB2.h"
using namespace std;


class CC1 : public BB2
{
    public:
        CC1(int);
        ~CC1();
        void whoAmI();

    protected:

    private:
};

#endif // CC1_H
