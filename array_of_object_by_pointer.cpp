#include <iostream>
using namespace std;

class employee
{
    int id;

public:
    void setdata()
    {
        cout << "enter the id" << endl;
        cin >> id;
    }
    void displaydata()
    {
        cout << "the id is :" << id << endl;
    }
};

int main()
{
    int n;
    cout << "enter the total no. of employees:";
    cin >> n;

    // Create an array of employee objects using dynamic allocation
    employee *ptr1 = new employee[n];

    // Use a loop to set data for each employee
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter data for employee " << i + 1 << ":" << endl;
        ptr1[i].setdata();
    }

    // Use a loop to display data for each employee
    for (int i = 0; i < n; ++i)
    {
        cout << "Displaying data for employee " << i + 1 << ":" << endl;
        ptr1[i].displaydata();
    }

    //  delete the dynamically allocated array
    delete[] ptr1;

    return 0;
}
