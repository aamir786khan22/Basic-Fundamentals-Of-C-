#include <iostream>
using namespace std;

int main() 
{
    int n, newValue;

    cout << "Enter the size of elements in the array: ";
    cin >> n;
    int arr[n];
    	
    for (int i = 0; i < n; i++)
     {
    cout << "Enter " << i+1<< " element: ";
    cin >> arr[i];
    }

    cout << "Enter the new value to insert at the beginning: ";
    cin >> newValue;

    // Shift elements to the right to make space for the new element
    for (int i = n; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the beginning
    arr[0] = newValue;
    n++; // Increase the size of the array

    cout << "Array after insertion at the beginning: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}