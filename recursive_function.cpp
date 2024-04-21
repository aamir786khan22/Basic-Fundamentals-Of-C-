#include <iostream>
using namespace std;
// function apne app ko call karta hai (self calling)
    int factorial(int n)
    {
        if(n<=1)
        {return 1;}
        return n* factorial(n-1);
    }
int main()
{ int a;
cout<<"enter the number:";
cin>>a;
cout<<"the factorial of "<< a <<" is: "<<factorial (a)<<endl;
    
return 0;
}