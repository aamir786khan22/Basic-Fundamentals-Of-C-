#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

public :
void getdata()
{
    a=786;

} 
void dispaly()
{
    cout<<"the value of a is : "<<a<<endl;
}
};

class Derived : protected Base
{
};

int main()
{
    Base b; 
    cout<<"called by base class "<<endl;
    b.getdata();
    b.dispaly();
    Derived d;
    cout<<"called by derived class "<<endl;
    b.getdata();
    b.dispaly();
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
