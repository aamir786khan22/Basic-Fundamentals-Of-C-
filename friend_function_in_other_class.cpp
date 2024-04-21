#include <iostream>
using namespace std;

class complex;  // Forward declaration

class calculator {
public:
    int add(int a, int b) {
        return (a + b);
    }
    int sum_real_complex(complex o1, complex o2);
    int sum_img_complex(complex o1, complex o2);
};

class complex {
    int a, b;

public:
    int setdata(int v1, int v2) {
        a = v1;
        b = v2;
        return 0;
    }

    friend int calculator::sum_real_complex(complex, complex);
    friend int calculator::sum_img_complex(complex, complex);
    void display() {
        cout << "the complex no. is : " << a << "+" << b << "i" << endl;
    }
};

int calculator::sum_real_complex(complex o1, complex o2) {
    return (o1.a + o2.a);
}

int calculator::sum_img_complex(complex o1, complex o2) {
    return (o1.b + o2.b);
}

int main() {
    complex x, y;
    x.setdata(1, 5);
    x.display();

    y.setdata(8, 2);
    y.display();

    calculator calc;
    int real = calc.sum_real_complex(x, y);
    cout << "the sum of real part is : " << real << endl;
    int img = calc.sum_img_complex(x, y);
    cout << "the sum of imaginary part is : " << img << endl;

    return 0;
}
