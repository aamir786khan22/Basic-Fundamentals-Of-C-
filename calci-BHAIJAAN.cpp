#include<iostream>
using namespace std;
int add(float, float );
int sub(float, float );
int mul(float, float );
int div(float, float );

int main()
{ float x,y,k,a,b,c,d;
    cout << "This is a program of making calculator" << endl;
  cout<<"Enter 1 for addition\n Enter 2 for subtraction\n Enter 3 for multiplication\n Enter 4 for division\n ";
  cin>>k; 
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  a = add(x,y);
  b = sub(x,y);
  c = mul(x,y);
  d = div(x,y);
  if (k==1)
  {
  cout<<a;
  }
  if (k==2)
  {
  cout<<b;
  }
  if (k==3)
  {
  cout<<c;
  }
  if (k==4)
  {
  cout<<d;
  }
  
  
  
  
  
    return 0;
}
int add(float x, float y)
{ return x+y;
}
int sub(float x, float y )
   {
return x-y;
   } 
int mul(float x, float y )
   {
return x*y;
   } 
int div(float x, float y )
   {
return x/y;
   } 

