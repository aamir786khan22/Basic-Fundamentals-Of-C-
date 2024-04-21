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
    cout << "enter the total no. of employee:";
    cin >> n;
    //  normal array ki tarah is me bhi loop ka istemall kar sakte hai
    employee insaane[n];

    for (int i = 0; i < n; i++)
    {
        insaane[i].setdata();
        insaane[i].displaydata();
    }

    return 0;
}