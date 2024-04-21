#include <iostream>
#include <string>
using namespace std ;

const int n = 100;

class Stack {
private:
    char data[n];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(char value) {
        if (top < n - 1) {
            data[++top] = value;
        }
    }

    char pop() {
        if (top >= 0) {
            return data[top--];
        }
        return '\0'; // Return null character if the stack is empty
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack nameStack;
    string name;

    // Ask the user to enter their name
    cout << "Enter your name: ";
    cin >> name;

    // Push each character of the name onto the stack
    for (char c : name) {
        nameStack.push(c);
    }

    // Pop and print characters from the stack to reverse the order
    cout << "Reversed name: ";
    while (!nameStack.isEmpty()) {
        cout << nameStack.pop();
    }
    cout << endl;

    return 0;
}