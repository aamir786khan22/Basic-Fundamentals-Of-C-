#include<iostream> 
using namespace std;

class Counter {
private:
    int count;
public:
    Counter(): count(0) {}
    
    // Prefix increment operator overloading 
    Counter& operator++() {
        count++;
        return *this;
    }

    // Postfix increment operator overloading 
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    // Binary plus operator overloading 
    Counter operator+(const Counter& c) const {
        Counter temp;
        temp.count = count + c.count; 
        return temp;
    }

    // Multiplication operator overloading 
    Counter operator*(const Counter& c) const {
        Counter temp;
        temp.count = count * c.count; 
        return temp;
    }

    // Display the count value 
    void display() const {
        cout << count << endl;
    }
};

int main() {
    Counter c1, c2, c3;
    c1.display(); 
    
    // Increment operator
    ++c1; 
    c2++;
    c1.display(); 
    
    // Binary plus operator 
    c3 = c1 + c2;
    c3.display(); // Output: 2

    // Multiplication operator 
    c3 = c1 * c2;
    c3.display(); // Output: 0 
    
    return 0;
}
