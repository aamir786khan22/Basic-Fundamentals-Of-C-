#include<iostream>
using namespace std;
void add(float, float );
void sub(float, float );
void mul(float, float );
void div(float, float );

int main()
{ float x,y,k,m;
    cout << "This is a program of making calculator" << endl;
  cout<<"Enter 1 for addition\n Enter 2 for substraction\n Enter 3 for multiplication\n Enter 4 for division\n ";
  cin>>k; 
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  if (k==1)
  {
  cout<<"The ans is :"<<m;
  }
  
  
  
  
  
    return 0;
}
void add(float x, float y)
{ float m; cout<< "The ans is:"<<x+y;
cin>>m;
}
    