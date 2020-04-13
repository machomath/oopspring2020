#ifndef AA_H
#define AA_H

#include <iostream>
using namespace std;

class AA
{
    public:
        AA(int);
        ~AA();
        int x;
        virtual void whoIsBase() final;
        virtual void whoAmI() = 0;
    protected:

    private:
};

#endif // AA_H
