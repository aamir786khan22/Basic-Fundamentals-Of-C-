#include <iostream>
using namespace std;
    void swap_pointer(int*a,int*b)
    // adress function me a ke dereference karna padta hai
    { int temp=*a;
    *a=*b;
    *b=temp;

    }
int main()
{int x,y;
cout<<"enter the value of x and y"<<endl;
cin>>x>>y;
cout<<"the value of x:"<<x<<"\nthe value of y:"<<y<<endl;
swap_pointer(&x,&y);
// function me address bhejna padta hai 
cout<<"the value of x:"<<x<<"\nthe value of y:"<<y<<endl;
return 0;
}