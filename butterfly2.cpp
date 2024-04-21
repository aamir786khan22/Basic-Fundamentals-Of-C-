#include<iostream>
using namespace std;

int main()
{ int n,i,j;

    cout << "program of butterfly print" << endl;
    cout<<"enter the value of N:"<<endl;
    cin>>n;
    cout<<endl<<endl;
     for (i=0;i<=n;i++)
     {for (j=0;j<=i;j++)
     {cout<<"*";}
     int space =2*n -2*i;
      for (j=0;j<=space;j++)
      {cout<<" ";}
     for (j=0;j<=i;j++)
     {cout<<"*";}
     
     cout<<endl;
     }
     for (i=n;i>=0;i--)
     {for (j=0;j<=i;j++)
     {cout<<"*";}
     int space =2*n -2*i;
      for (j=0;j<=space;j++)
      {cout<<" ";}
     for (j=0;j<=i;j++)
     {cout<<"*";}
     
     cout<<endl;
     }

       
    
    
    
    
    
    
    
    
    return 0;
}