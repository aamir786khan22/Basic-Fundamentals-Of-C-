#include<iostream>
using namespace std;

int main()
{
    cout << "this is a programme of array \n and pointer" << endl;
   int a[5]; 
   int* b[5];
   for(int i=0;i<5;i++)
   {
   
   cout<<"enter the marks of "<<i+1<<" subjects"<<endl;
   cin>>a[i];
   b[i] = &a[i];
   }
   for(int i=0;i<5;i++)
   {
   cout<<" The values for "<<i<<endl;
   cout<<"the marks is :"<<a[i]<<endl;
    
   cout<<"the pointer adress is :"<<b[i]<<endl;
   cout<<"the pointer dereference  :"<<*b[i]<<endl;
   }
   
   
   
   
    return 0;
}