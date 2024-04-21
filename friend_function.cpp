#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void display()
    {
        cout << "the complex no. is : " << a << "+" << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex x, y, sum;
    x.setdata(1, 5);
    x.display();

    y.setdata(8, 2);
    y.display();

    sum = sumcomplex(x, y);
    sum.display();
    return 0;
}
