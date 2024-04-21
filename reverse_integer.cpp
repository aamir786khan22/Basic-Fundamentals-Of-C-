#include <iostream>
#include<math.h>
using namespace std;
int main()
{
int x;
int min =pow(-2,31);
int max =pow(2,31) -1;
int ans=0;
cout<<"enter the no. ";
cin>>x;

while (x!=0)
{
    int digit =x%10;
    if ((ans >max/10)||(ans <min/10))
    { 
        return 0;
        
    }
    ans = (ans * 10) + digit;
    x= x/10;
  
}
cout<<"answer is :"<<ans;
return 0;}