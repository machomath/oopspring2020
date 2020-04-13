#ifndef GRAND_H
#define GRAND_H
#include <iostream>
using namespace std;
class Grand
{
    public:
        Grand(int, int, int);
        ~Grand();
        int publicGrand;
        void printPrivateGrand();

    protected:
        int protectedGrand;

    private:
        int privateGrand;
};

#endif // GRAND_H
