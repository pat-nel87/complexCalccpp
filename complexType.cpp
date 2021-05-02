

#include "complexType.h"

#include "complexType.h"
#include <cstdlib>
#include <cmath>

void complexType::setComplex(const double &real, const double &imag)
{
    realPart = real;
    imaginaryPart = imag;
}

void complexType::getComplex() const
{
    char sign;
    // checks for sign of imaginary portion
    // assigns correct sign for display in cout statement
    if (imaginaryPart < 0)
    {
        sign = ' ';
    }
    else
    {
        sign = '+';
    }

    cout << realPart << sign << abs(imaginaryPart) << "i" << endl;
}

complexType::complexType(double r, double i)
{
    setComplex(r, i);
}

complexType complexType::operator+
        (const complexType& otherComplex) const
{
    complexType tempComplex;
    tempComplex.realPart = realPart + otherComplex.realPart;
    tempComplex.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart;

    return tempComplex;
}

complexType complexType::operator-
        (const complexType& otherComplex) const
{
    complexType tempComp;
    tempComp.realPart = realPart - otherComplex.realPart;
    tempComp.imaginaryPart = imaginaryPart - otherComplex.imaginaryPart;

    return tempComp;
}

complexType complexType::operator*
        (const complexType& otherComplex) const
{
    complexType temp;
    temp.realPart = realPart * otherComplex.realPart;
    temp.imaginaryPart = imaginaryPart * otherComplex.imaginaryPart;

    return temp;
}

bool complexType::operator==
        (const complexType& otherComplex) const
{
    if (realPart == otherComplex.realPart && imaginaryPart == otherComplex.imaginaryPart)
    {
        cout << "True" << endl;
        return true;
    }
    else
    {
        cout << "False" << endl;
        return false;
    }

}

complexType complexType::operator~() const
{
    complexType temp;
    temp.imaginaryPart = imaginaryPart * -1;
    temp.realPart = realPart;
    return temp;
}

double complexType::operator!() const
{
    double temp;
    temp = sqrt((realPart * realPart) + (imaginaryPart * imaginaryPart));

    return temp;
}

ostream& operator<<(ostream& osObject, const complexType& cObject)
{
    char sign;
    // checks for sign of imaginary portion
    // assigns correct sign for display in cout statement
    if (cObject.imaginaryPart < 0)
    {
        sign = ' ';
    }
    else
    {
        sign = '+';
    }

    osObject << cObject.realPart << sign << cObject.imaginaryPart << "i" << endl;
    return osObject;
}

istream& operator>>(istream& isObject, complexType& cObject)
{
    isObject >> cObject.realPart >> cObject.imaginaryPart;
    return isObject;
}
