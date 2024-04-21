#include<iostream>
using namespace std;

int main()
{
    cout << "this is a programme of pointer" << endl;
  int A=786;
  //POINTER IS THE ADRESS OF DATA TYPE WHICH HOLDES THE ADDRESS OF ANOTHER DATA TYPE
  int *B=&A;
  cout<<"the addres  is :"<<&A<<endl;
  cout<<"the value is:"<<*B<<endl;
  
  //pointer to pointer concept
  int**C=&B;
  cout<<"the value of**C is :"<<**C<<endl;
  
  
  
  
  
  
    return 0;
}