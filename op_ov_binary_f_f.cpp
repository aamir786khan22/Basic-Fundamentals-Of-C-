// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // declaration of friend function
    friend Complex operator + (Complex obj1, Complex obj2);

    void print() { cout << real << " + " << imag << "i" << endl; }
};

// definition of friend function outside the class
Complex operator + (Complex obj1, Complex obj2)
{
    Complex res;
    res.real = obj1.real + obj2.real;
    res.imag = obj1.imag + obj2.imag;
    return res;
}

// Driver code
int main()
{
    Complex c1(10, 5), c2(2, 4), c3;

    // An example call to "operator+"
    c3 = c1 + c2;
    c3.print();

    return 0;
}
