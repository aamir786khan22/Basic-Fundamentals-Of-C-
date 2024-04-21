#include <iostream>
using namespace std ;
int main ()
{ cout<<"this is a program of prime no.  :"<<endl;
cout<<"enter no. : "<<endl;
int n,i;
cin >>n;
for( i=2; i<n;i++) 
{ 
if(n%i==0)
{ cout<<"NOT A PRIME "<<endl;

break;}
}
if(i==n){
cout<<"Prime"<<endl<<endl;


} 


cout<<"  NEXT PROGRAM OF PRIME"<<endl;
cout<<"enter prime no.. between a&b is:"<<endl;
cout<<"a:"<<endl;

int a,b;
cin >>a;
cout<<"b:"<<endl;
cin>>b;
for (int j=a;j<b;j++)
{
for( i=2; i<j;i++) 
{ 
if(j%i==0)
{break;}
}
if(j==i){
cout<<j<<endl<<endl;


} 
}
   
   
  main() ;
   
   
return 0;
}