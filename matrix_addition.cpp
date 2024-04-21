#include<iostream>
using namespace std;

int main()
{ int r,c,i,j;
cout<<"enter the size of row:";
cin>>r;
cout<<"enter the size of column:";
cin>>c;
int mat1[r][c];
int mat2[r][c];
int mat3[r][c];
cout<<" enter the elemnts of matrix 1 :\n";

for( i=0;i<r;i++)
 {
 
for( j=0;j<c;j++)
{cout<< "("<<i<<","<<j+1<<")"<<":";
cin>>mat1[i][j];}

}
cout<<" enter the elemnts of matrix 2 :\n";

for( i=0;i<r;i++)
 {
 
for( j=0;j<c;j++)
{cout<< "("<<i<<","<<j+1<<")"<<":";
cin>>mat2[i][j];}

}
cout<<" sum of the elemnts of matrix 1 and matrix 2 :\n";

for( i=0;i<r;i++)
 {
 
for( j=0;j<c;j++)
{mat3[i][j] = mat1[i][j]+ mat2[i][j];
cout<<mat3[i][j]<<"\t";
}
cout<<"\n";
}
    return 0;
}