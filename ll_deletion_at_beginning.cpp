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
     // Take user input for creating the linked list
    int n;
    cout <<"enter the size of the elements :";
    cin>>n;
   
    int value[n];
    cout << "Enter values for the linked list :\n";
    for (int i=0;i<n;i++) {
       cout<<i+1<<":";
        cin >> value[i];
        Node* newNode = new Node;
        newNode->data = value[i];
        newNode->next = head;
        head = newNode;
    }

    // Print the elements of the linked list
    cout << "Linked list elements:" << endl;
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    // Delete the first element of the linked list
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        cout << "The linked list is empty, nothing to delete." << endl;
    }

    // Print the updated linked list
    cout << "Linked list after deleting the first element:" << endl;
    current = head;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    return 0;
}