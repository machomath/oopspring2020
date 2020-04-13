#ifndef BB1_H
#define BB1_H
#include "AA.h"

class BB1 final : public AA
{
    public:
        BB1(int);
        ~BB1();
        void whoAmI();
        //void whoIsBase(); //error
    protected:

    private:
};

#endif // BB1_H
