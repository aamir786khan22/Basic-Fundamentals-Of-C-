#include <iostream>
#include <thread>

using namespace std; // Include the std namespace

// Function to be executed by the thread
void printNumbers() {
    for (int i = 1; i <= 5; ++i) {
        cout << "Thread 1: " << i << endl;
    }
}

int main() {
    // Create a thread and pass the function to be executed
    thread t1(printNumbers);

    // Main thread continues its own work
    for (int i = 1; i <= 5; ++i) {
        cout << "Main Thread: " << i << endl;
    }

    // Wait for the thread to finish
    t1.join();

    return 0;
}
