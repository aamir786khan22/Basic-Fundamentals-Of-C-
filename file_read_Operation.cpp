#include <iostream>
#include <fstream>
using namespace std;
    
int main()
{
    // reading operation in file using constructor;
    string str;
    ifstream in ("sample.txt"); //reading operation
    //  in>>str; // sirf ek sabd read karega
    getline(in,str);// getline function used puri line padhne ke liye
    cout<<str;

return 0;
}