#include<iostream>
using namespace std;

int main()
{ int a,count,temp;
    cout << "this is the program of finding frequency of total no which you enter" << endl<<endl;
    cout <<"enter the total no. which you enter:"<<endl;
    cin>>a;
    int x[a];
    
    cout<<"enter the no.one.by one:"<<endl;
    for(int i=0;i<a;i++)
    {
    cout<<i+1<<":";
    cin>>x[i];
    }
    
    for(int i=0;i<a;i++)
    {
    
    count = 0;
    temp=x[i];
    
    for(int j=0;j<a;j++)
    {
    
    if (temp ==x[j])
    {count++;}
    
    }
    cout<<"the frequency of "<<temp<<"is :"<<count<<endl;
    
    }
    return 0;
}