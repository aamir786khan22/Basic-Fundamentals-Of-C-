#include <iostream>
using namespace std;
    
    // function have same name and different arguments
    int sum(int a ,int b) 
    {
        cout<<"using function with 2 arguments"<<endl;
        return a+b;
    }
      int sum(int a ,int b ,int c) 
    {
        cout<<"using function with 3 arguments"<<endl;
        return a+b+c;
    }
int main()
{
    cout<<"the sum of 6,7 is: "<<sum(6,7)<<endl;
    cout<<"the sum of 6,7,8 is: "<<sum(6,7,8)<<endl;
return 0;
}