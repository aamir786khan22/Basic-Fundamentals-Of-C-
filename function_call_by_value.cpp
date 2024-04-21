#include<iostream>
using namespace std;
 int summation(int a,int b);
int main()
{ int x,y;
    cout <<"enter the value of x:" ;
    cin>>x;
    cout <<"enter the value of y:" ;
    cin>>y;
    cout<<"the summation is :"<<summation(x,y);   
    return 0;
}
int summation(int a,int b)
{ return a+b;

}