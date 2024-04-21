#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    int n;
    Complex c1; // Declare c1 outside of the if statements

    cout << "the index is :\n 1. simple calling by object \n 2. calling with the help of pointer and address \n  3. calling with the help of pointer and new keyword \n 4. called by arrow operator\n ";

    cout << "choose the number from the index :" << endl;
    cin >> n;

    if (n == 1)
    {
        cout << "first type :" << endl;
        c1.setData(1, 54);
        c1.getData();
    }

    if (n == 2)
    {
        cout << "second type :" << endl;
        Complex *ptr = &c1;
        ptr->setData(1, 54);
        ptr->getData();
    }

    if (n == 3)
    {
        cout << "third type :" << endl;
        Complex *ptr = new Complex;
        ptr->setData(1, 54);
        ptr->getData();
        delete ptr; // Don't forget to delete allocated memory
    }

    if (n == 4)
    {
        // ARROW OPERATOR
        cout << "called by arrow operator" << endl;
        Complex *ptr = new Complex;
        ptr->setData(1, 54);
        ptr->getData();
        delete ptr; // Don't forget to delete allocated memory
    }
    cout<<"\n";
    main();

    return 0;
}
