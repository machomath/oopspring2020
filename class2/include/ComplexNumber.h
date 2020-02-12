#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

using namespace std;

class ComplexNumber
{
    public:
        ComplexNumber(double, double);
        ~ComplexNumber();
        double getX();
        double getY();
        ComplexNumber& setX(double);
        ComplexNumber& setY(double);
        ComplexNumber& printCN();
        ComplexNumber operator + (ComplexNumber);
        ComplexNumber operator - (ComplexNumber);
        ComplexNumber& operator += (ComplexNumber);

        ComplexNumber sumComplexNumber(ComplexNumber);
        ComplexNumber subComplexNumber(ComplexNumber);
        ComplexNumber mulComplexNumber(ComplexNumber);
        ComplexNumber divComplexNumber(ComplexNumber);
    protected:

    private:
        double x;
        double y;

};

#endif // COMPLEXNUMBER_H
