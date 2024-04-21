#include <iostream>
using namespace std;
    
class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class Derived : public Base1
{
   
   public:
    void greet(){
        cout<<"hello bhai log"<<endl;
    }
};

    
int main()
{

    Derived d;
    // Derived class ke greet function ko call karega 
    d.greet();
    
          // base class ke greet function ko call karega , AMBIGUITY solve karne ke liye
// SYNTAX:- OBJECT_NAME . CLASS NAME :: FUNCTION_NAME
                d.Base1 :: greet();
    
return 0;
}