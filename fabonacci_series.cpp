#include<iostream>
using namespace std;

int main()
{ int n,i;
cout<<"enter the size of the series:";
cin>>n;
int arr[n];
for( i=0;i<n;i++)
{ arr[0]=0;
 arr[1]=1;

arr[i]= arr[i-1]+arr[i-2];}
    cout << "the fabonacci series is: ";
for( i=0;i<n;i++)
{cout<<arr[i]<<" ";
}


    return 0;
}