#include<iostream>
using namespace std;
 
 int fact(int n);
int main()
{ int n;
    cout << "program of factorial by function " << endl;
   cout<<"enter  the value :";
   cin>>n;
    int ans = fact(n);
   cout<<"ans is :"<<ans;
   
   
   
    return 0;
}
int fact(int n)
{ int factorial =1;
for (int i =2 ; i<=n;i++)
{ factorial *=i;
}  
return factorial;
}