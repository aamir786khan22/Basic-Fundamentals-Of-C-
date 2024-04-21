#include <iostream>
using namespace std;

// Define a struct for a node in the linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;

    // Take user input for values to insert into the linked list
    int newValue;
    cout << "Enter the new value to insert at the beginning: ";
    cin >> newValue;
    int n;
    cout<<"enter the size of the elements:";
    cin>>n;
    int values[n]; // Values to insert
     cout<<"enter the elements:\n";
    for (int i = 0; i < n; ++i) {
    cout<<i+1<<":";
    cin>>values[i];   
        Node* newNode = new Node;
        newNode->data = values[i];
        newNode->next = head;
        head = newNode;
    }

    // Print the present elements of the linked list
    cout << "The elements of linked list are:" << endl;
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    // Insert the user-provided value at the beginning
    Node* newNode = new Node;
    newNode->data = newValue;
    newNode->next = head;
    head = newNode;

    // Print the updated linked list
    cout << "After inserting at the beginning, the elements of linked list are:" << endl;
    current = head;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    return 0;
}