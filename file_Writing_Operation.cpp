#include<iostream>
#include<fstream>
using namespace std;

int main()
{ 
    //   writing operation in file using constructor 
    string str =" sabka bhai BHAIJAAN,anuj ";
     ofstream out ("sample.txt"); //writing operation 
    out <<str;

//     We have created a string “str” which has a value “sabka bhai BHAIJAAN”
// Object “out” is created of the type ofstream and the file “sample.txt” is passed to it
// The string “str” is passed to object “out”
// "OUT" object hai kuch bhi name de sakte ho
    return 0;
}