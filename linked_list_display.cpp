#include <iostream>
using namespace std;

// Define the node structure for the linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    // Create five nodes with numbers
    int n;
    cout<<"enter the size of the elements:";
    cin>>n;
    Node nodes[n];
    int numbers[n];
    
    cout<<"ente the elements:\n";
    for(int i=0;i<n;i++)
    {cout<<i+1<<":";
    cin>>numbers[i];
    }
    // Initialize the linked list
    for (int i = 0; i < n; i++) {
        nodes[i].data = numbers[i];
        if (i < (n-1)) {
            nodes[i].next = &nodes[i + 1];
        } else {
            nodes[i].next = nullptr; // Last node's next is nullptr
        }
    }

    // Display the elements of the linked list
    cout << "Linked List:" << endl;
    Node* current = &nodes[0]; // Start from the first node
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    return 0;
}