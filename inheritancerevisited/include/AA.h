#ifndef AA_H
#define AA_H
#include <iostream>
using namespace std;

class AA
{
    public:
        AA(int, int, int);
        ~AA();
        int aaPublic;
        int getAAProtected();
        int getAAPrivate();
        void whoAmI();

    protected:
        int aaProtected;

    private:
        int aaPrivate;
};

#endif // AA_H
