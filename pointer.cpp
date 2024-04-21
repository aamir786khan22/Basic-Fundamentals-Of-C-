#include<iostream>
using namespace std;

int main()
{
    cout << "This is a program to demonstrate pointers" << endl;
    int A = 786;
    // POINTER IS THE ADDRESS OF DATA TYPE WHICH HOLDS THE ADDRESS OF ANOTHER DATA TYPE
    int *B = &A;
    cout << "The address is: " << &A << endl;
    cout << "The value is: " << *B << endl;
  
    return 0;
}
