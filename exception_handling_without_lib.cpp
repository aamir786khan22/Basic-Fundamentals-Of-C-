#include <iostream>

using namespace std;

int main() {

    // try block
    try {
        int numerator = 10;
        int denominator = 0;
        int res;

        if (denominator == 0) {
            throw "Division by zero not allowed!";
        }

        res = numerator / denominator;

        cout << "Result after division: " << res << endl;
    }
    catch (const char* errorMsg) {
        cout << "Exception caught: " << errorMsg << endl;
    }

    return 0;
}
