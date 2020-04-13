#ifndef CC_H
#define CC_H

#include <iostream>
#include "BB.h"
using namespace std;


class CC : public BB
{
    public:
        CC(int, int, int, int);
        ~CC();
        //void whoAmI();

    protected:

    private:
};

#endif // CC_H
