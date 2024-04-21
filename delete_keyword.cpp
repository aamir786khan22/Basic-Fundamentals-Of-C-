#include <iostream>

using namespace std;

int main() {
    int* ptr = new int;      // Allocate memory for an integer using new

    *ptr = 42;              // Assign a value to the allocated memory

    
    cout << "Value before delete: " << *ptr << endl;

    delete ptr;           // Deallocate the memory using delete

    // Note: After delete, the pointer is dangling(hadbadiya jehe); accessing it is undefined behavior
    // Uncommenting the line below would result in undefined behavior
    // cout << "Value after delete: " << *ptr << endl;

    // Set the pointer to nullptr to avoid dangling pointer issues
    ptr = nullptr;

    cout<<"the value after deleted:"<< ptr << endl;

    return 0;
}
