#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 1;
    cout << "enter the row & column :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count;
            count += 1;
        }
        cout << endl;
    }
    return 0;
}