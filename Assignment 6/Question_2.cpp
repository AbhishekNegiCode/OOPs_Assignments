#include <iostream>
using namespace std;
class Number {
    int value;
public:
    explicit Number(int n) : value(n) {}
    // Prefix unary operator.
    Number& operator--() { --value; return *this; }
    void display() const { cout << value << '\n'; }
};
int main() {
    Number object(10);
    cout << "Before: "; object.display();
    --object;
    cout << "After: "; object.display();
}
