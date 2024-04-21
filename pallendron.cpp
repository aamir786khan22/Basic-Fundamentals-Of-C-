#include<iostream>
using namespace std;

int main()
{ int n;
cout<<"enter the size of your name :" ;
cin>>n;
char name[n] ;
for( int i =0;i<n;i++)
{cout<<"enter your name letter one by one :";
cin>>name[i];} 
for(int i=0;i<(n/2);i++){
if (name[i]==name[n-i-1])
{cout<<"It's palindrome\n";break;}

else
   { cout<<"Not palindrome \n ";
   break;}
   }

    
    return 0;
}