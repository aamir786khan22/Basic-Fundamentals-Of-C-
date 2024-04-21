	#include<iostream>
using namespace std;

int main()
{// cout<<"this is the program of multiplication";
int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3]={1,2,3,4,5,6,7,8,9};
int c[3][3]={0,0,0,0,0,0,0,0,0};
for (int i=0;i<3;i++)
{for (int k=0;k<3;k++){
for (int j=0;j<3;j++){
c[i][k]=c[i][k]+(a[i][j]*b[j][k]);}}
}
for (int i=0;i<3;i++)
{cout<<"\n";
for (int j=0;j<3;j++){
cout<<" "<<c[i][j];
 } }  
    return 0;
}