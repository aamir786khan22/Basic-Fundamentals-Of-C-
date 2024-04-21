#include<iostream>
using namespace std;

int main()
{int x;
    cout << "Enter your age:";
    cin>>x;
    if  (x <18 && x>0)
    {cout<<"You are not eligible"<<endl;
    }
    else if (x>18 && x<100)
    {cout<<"You are eligible";}
    else {cout<<"chala ja ****";}
    return 0;
}