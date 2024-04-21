	#include<iostream>
using namespace std;

int main()
{ int max=0;
    cout << "this is a programme of finding\n maximum value in array" << endl<<endl;
  int x;
  cout<<"enter the size of total no. which you enter: "<<endl;
  cin>>x;
  int a[x];
  for(int i=0;i<x;i++)
  { cout<<"enter the number one by one :"<<endl;
  cin>>a[i];
  }
  
  for(int i=0;i<x;i++)
  {
  if (max<a[i])
  {max=a[i];}
  }
  cout<<"the maximum value is;"<<max<<endl;
  
  
  
    return 0;
}