#include <iostream>
#include "ComplexNumber.h"

using namespace std;
int sqByValue(int);
int sqByRef(int&);
ComplexNumber sumCN(ComplexNumber, ComplexNumber);
int main()
{
    {
        int x = 5;
        x += 10;
        cout << x << endl;
        ComplexNumber z1(2.5, 2.5), z2(2.5, 2.5);
        if(z1 != z2){
            cout << "They are not eq" << endl;
        }else{
            cout << "They are eq" << endl;
        }
        ComplexNumber z3 = z1 - z2;
        z2 += z1;
        z2.printCN();
        cout << "--------------" << endl;
        z1.sumComplexNumber(z2).printCN();
        z1.subComplexNumber(z2).printCN();

        try{
            z1.divComplexNumber(z2).printCN();
        }catch(char const* e){
            cerr << e;
        }


        //z1.sumComplexNumber(z2).printCN();
        cout << "---------------" << endl;
        sumCN(z1, z2).printCN();
        int x1 = 2, x2 = 2;
        cout << sqByValue(x1) << " in Sq of " << x1 << endl;
        cout << x1 << endl;
        cout << sqByRef(x2) << " in Sq of " << x2 << endl;
        cout << x2 << endl;
        cout << "Note: there was no issue with call by reference, it was the behavior of cout" << endl;
        cout << "----------------" << endl;
        ComplexNumber z(2.1, 3.5);
        ComplexNumber w(1,-6.5);
        z.setX(5.6).setY(-5.6).printCN();
        cout << "-----------------" << endl;
        cout << "(" << z.getX() << ", " << z.getY() << ")" << endl;
    }
    //cout << z.x << ", " << z.y << endl;// this is an error since nomore z
    cout << "Control was here" << endl;

    return 0;
}

//write a function in main.cpp which would add two ComplexNumbers
ComplexNumber sumCN(ComplexNumber cn1, ComplexNumber cn2)
{
    double cn1x = cn1.getX();
    double cn1y = cn1.getY();
    double cn2x = cn2.getX();
    double cn2y = cn2.getY();

    double cn3x = cn1x + cn2x;
    double cn3y = cn1y + cn2y;
    ComplexNumber cn3(cn3x, cn3y);
    return cn3;
}

int sqByValue(int x)
{
    x = x*x;
    return x;
}

int sqByRef(int& x)
{
    x = (x)*(x);
    return x;
}
