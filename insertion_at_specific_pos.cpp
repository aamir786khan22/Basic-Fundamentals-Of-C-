#include <iostream>
using namespace std;

int main() {    
int n;
cout<<"enter the size of the element :";
cin>>n;
    int arr[n];
    int  newValue, position;

    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++) {
    cout<<i+1<<":";
        cin >> arr[i];
    }

    cout << "Enter the new value to insert: ";
    cin >> newValue;

    cout << "Enter the position to insert : ";
    cin >> position;

    for (int i = n; i > position-1 ; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position -1 ] = newValue;
    n++; 

    cout << "Array after insertion at position " << position << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}