#include <iostream>
using namespace std;

int main()
 {    

int n;
cout<<"enter the size of the element :";
cin>>n;

    int arr[n];
    int   position;

    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++) 
    {
    cout<<i+1<<":";
    cin >> arr[i];
    }
    
    cout << "Enter the position to deletion : ";
    cin >> position;

    for (int i = position-1; i < n ; i++) 
    {
        arr[i] = arr[i + 1];
    }

    n--; 

    cout << "Array after deletion at position " << position << ": ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}