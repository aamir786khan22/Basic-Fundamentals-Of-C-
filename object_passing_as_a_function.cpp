#include <iostream>
using namespace std;
    
    class complex 
    {
       int a,b;
       public:
       void setdata(int x1,int x2)
       {
         a=x1;
         b=x2;
       }
       void complexsum( complex o1, complex o2)

       {
         a = o1.a + o2.a;
         b = o1.b + o2.b;
       }
       void display()
       {
        cout<<"the comlex no. is "<<a<<"+"<<b<<"i"<<endl;
       }
    };
int main()
{
    complex c1,c2,c3;
    c1.setdata(2,4);
    c1.display();
    c2.setdata(8,4);
    c2.display();
    c3.complexsum(c1,c2);
    c3.display();
return 0;
}