
#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int i,j,space;
    for (i = 1; i <= rows; ++i) {
        for (space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for ( j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout<<endl<<endl;

// Left-aligned Pyramid:




    
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    cout<<endl<<endl;

//Inverted Pyramid:

    
    for (i = rows; i >= 1; --i) {
        for (space = 0; space < rows - i; ++space) {
            std::cout << " ";
        }
        for ( j = i; j <= 2 * i - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    cout<<endl<<endl;
//Hollow Pyramid:


    
    for (i = 1; i <= rows; ++i) {
        for (space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                cout << "*";
            } else {
               cout << " ";
            }
        }
        cout << endl;
    }
    return 0;}