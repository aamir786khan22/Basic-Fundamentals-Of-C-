#include<iostream>
#include<cstring>
#include<stack>
using namespace std;


int main() {
    char str[20];
    char ch;
    cin >> str;
    stack<char> s; 

    for(int i = 0; i < strlen(str); i+=2)
       { s.push(str[i]);}

    int len = s.size();

    for(int i = 0; i < len; i++) {

    	ch = s.top();  
    	cout << ch;

        s.pop();
    }
    return 0;
}
    