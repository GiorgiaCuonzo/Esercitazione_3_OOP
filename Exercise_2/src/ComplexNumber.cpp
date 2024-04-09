#include <iostream>
#include "ComplexNumber.hpp"

ostream& operator<<(ostream& os, const ComplexNum &c)
{
    if(c.imaginary > 0)
    {
        if(c.real == 0)
        {
            os << "+i" << c.imaginary;
        }
        else
        {
            os << c.real << "+i" << c.imaginary;
        }
    }
    else if(c.imaginary < 0)
    {
        if(c.real == 0)
        {
            (os << "-i") << -c.imaginary;
        }
        else
        {
            ((os << c.real) << "-i") << -c.imaginary;
        }
    }
    else
    {
        os << c.real;
    }
    return os;
}


ComplexNum operator+ (const ComplexNum &c1, const ComplexNum &c2)
{
    double re = c1.real + c2.real;
    double im = c1.imaginary + c2.imaginary;
    ComplexNum c(re,im);
    return c;
}


bool operator== (const ComplexNum &c1, const ComplexNum &c2)
{
    if(c1.real != c2.real)
    {
        return false;
    }
    else if(c1.imaginary != c2.imaginary)
    {
        return false;
    }
    else
    {
        return true;
    }
}


ComplexNum conjugate(const ComplexNum &c)
{
    double im_conjug = -c.imaginary;
    ComplexNum c_conjugate(c.real,im_conjug);
    return c_conjugate;
}
