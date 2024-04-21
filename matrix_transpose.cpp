#include<iostream>
using namespace std;

int main()
{ int r,c,i,j;
cout<<"enter the size of row:";
cin>>r;
cout<<"enter the size of column:";
cin>>c;
cout<<"the elemnts of matrix :\n";
int mat[r][c];
for( i=0;i<r;i++)
 {
 
for( j=0;j<c;j++)
{cout<< "("<<i<<","<<j+1<<")"<<":";
cin>>mat[i][j];}

}
cout<<"the matrix is :\n";
for( i=0;i<r;i++)
 {
 
for( j=0;j<c;j++)
{cout<<mat[i][j]<<"\t";
}
cout<<"\n";
}

cout<<"the transpose of matrix is :\n";
for( i=0;i<r;i++)
 {
 
for( j=0;j<c;j++)
{cout<<mat[j][i]<<"\t";
}
cout<<"\n";
}

    return 0;
}