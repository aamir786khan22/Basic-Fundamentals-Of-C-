#include <iostream>
using namespace std;

class sample {
private:
 int id;

 public:
 void initial(int x)
 {
    id =x;
 }

 sample(){} // default constructor

 sample(sample &t)
 {
    id =t.id;
 }
 void display()
 {
    cout<<endl<<"ID IS :"<<id<<endl;
 }

};
    
int main()
{
    sample obj1;
    obj1.initial(10);
    obj1.display();

    sample obj2=obj1;
    obj2.display();

    sample obj3(obj1);
    obj3.display();
    cout<<"aamir bahi";
return 0;
}
