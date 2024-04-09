#include <iostream>
#include <cmath>
#include "ComplexNumber.hpp"

int main()
{
    ComplexNum c(1,2);
    cout << "The complex number c is: " << c << endl;
    ComplexNum c_conj = conjugate(c);
    cout << "Its conjugate is: " << c_conj << endl;

    ComplexNum cc(-5,1.88);
    cout << "The complex number cc is: " << cc << endl;
    ComplexNum cc_conj = conjugate(cc);
    cout << "Its conjugate is: " << cc_conj << endl;

    if (c==cc)
    {
        cout << "The two complex numbers c and cc are equivalent" << endl;
    }
    else
    {
        cout << "The two complex numbers c and cc are not equivalent" << endl;
    }

    ComplexNum sum = c + cc;
    cout << "The sum of c and cc is equal to: " << sum << endl;


    return 0;
}
