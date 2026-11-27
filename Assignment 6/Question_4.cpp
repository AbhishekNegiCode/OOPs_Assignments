#include <iostream>
using namespace std;
class Number {
    int value;
public:
    explicit Number(int n) : value(n) {}
    Number operator+(const Number& other) const { return Number(value + other.value); }
    Number operator-(const Number& other) const { return Number(value - other.value); }
    void display() const { cout << value << '\n'; }
};
int main() {
    Number first(20), second(8);
    Number result = first + second;
    cout << "Sum: "; result.display();
    cout << "Difference: "; (first - second).display();
}
