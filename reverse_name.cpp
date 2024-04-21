#include<iostream>
#include<string>
using namespace std;

int main()
{ int x,i;

   cout << "this is a program of reverse the name :" << endl;
   cout<<"enter the size of name :";
   cin>>x;
   
   char name [x];
   cout<<"enter your name letter one by one:\n";
   for(i=0; i<x;i++)
   { cout<<i+1<<":";
    cin>> name[i];}
    cout<<"original name is :";
    for(i=0; i<x;i++)
   { cout<<name [i];}
   cout <<endl;
    
   cout<<"reverse name is :";
   for(i=x;i>=0;i--)
   {cout<< name[i];}

    return 0;
}