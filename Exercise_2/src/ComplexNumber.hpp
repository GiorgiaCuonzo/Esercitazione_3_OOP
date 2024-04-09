#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>
using namespace std;

struct ComplexNum
{
    //Definisco gli attributi
    double real;
    double imaginary;

    //Inizializzo
    ComplexNum(double a, double b):
        real(a),
        imaginary(b)
    {}
};


//Dichiaro le funzioni
ostream& operator<<(ostream& os, const ComplexNum &c);

ComplexNum operator+ (const ComplexNum &c1, const ComplexNum &c2);

bool operator== (const ComplexNum &c1, const ComplexNum &c2);

ComplexNum conjugate(const ComplexNum &c);

#endif
