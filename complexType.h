//
// Created by sav-dab87 on 5/1/21.
//




// Student: Patrick Nelson
// Assignment #: 5
// Due: 4/20/21
//

#ifndef ASSIGNMENT5_COMPLEXTYPE_H
#define ASSIGNMENT5_COMPLEXTYPE_H


#include <iostream>
using namespace std;

class complexType
{
    //Overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const complexType&);
    friend istream& operator>>(istream&, complexType&);

public:
    void setComplex(const double& real, const double& imag);
    //Function to set the complex numbers according to
    //the parameters.
    //Postcondition: realPart = real; imaginaryPart = imag;

    void getComplex() const;
    //Function to retrieve the complex number.
    //Postcondition: real = realPart; imag = imaginaryPart;

    complexType(double real = 0, double imag = 0);
    //Constructor
    //Initializes the complex number according to
    //the parameters.
    //Postcondition: realPart = real; imaginaryPart = imag;

    complexType operator+
            (const complexType& otherComplex) const;
    //Overload the operator +

    complexType operator-
            (const complexType& otherComplex) const;

    complexType operator*
            (const complexType& otherComplex) const;
    //Overload the operator *

    complexType operator~() const;

    double operator!() const;

    bool operator == (const complexType& otherComplex) const;
    //Overload the operator ==

private:
    double realPart;       //variable to store the real part
    double imaginaryPart;  //variable to store the
    //imaginary part
};



#endif //ASSIGNMENT5_COMPLEXTYPE_H




