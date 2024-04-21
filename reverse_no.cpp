#include<iostream>
using namespace std;

int main()
{ int n, ld;
    cout << "program of reverse the no. " << endl;
    cout<< "enter the no.  : ";
    cin>>n;
    int reverse =0;
    while (n>0)
    {  ld=n%10 ;
     reverse = reverse *10 +ld;
     n=n/10;
    }
    cout<<"reverse no is :"<<reverse;
    
    
    
    return 0;
}