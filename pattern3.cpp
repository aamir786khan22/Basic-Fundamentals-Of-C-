#include <iostream>
using namespace std;
int main()
{
int n,i,j;
int count =1;
cout<<"enter the row & column :";
cin>>n;
 
for(i=0;i<n;i++)
{
    for(j=0; j<i-j+1; j++)
    {
        cout<<j+1;
       
        
    }
     cout<<endl;
   

}
    return 0;
} 