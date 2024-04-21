#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, newValue;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the new value to insert at the end: ";
    cin >> newValue;

    // Insert the new value at the end
    arr[n] = newValue;
    n++; // Increase the size of the array

    cout << "Array after insertion at the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}