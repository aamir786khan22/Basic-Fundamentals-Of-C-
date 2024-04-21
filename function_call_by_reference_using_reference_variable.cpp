#include <iostream>
using namespace std;
    void swap_reference_variable(int&a,int&b)
   
    { int temp=a;
    a=b;
    b=temp;

    }
int main()
{int x,y;
cout<<"enter the value of x and y"<<endl;
cin>>x>>y;
cout<<"the value of x:"<<x<<"\nthe value of y:"<<y<<endl;
swap_reference_variable(x,y);

cout<<"the value of x:"<<x<<"\nthe value of y:"<<y<<endl;
return 0;
}