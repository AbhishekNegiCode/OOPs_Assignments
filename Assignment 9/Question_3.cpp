#include <iostream>
#include <stdexcept>
using namespace std;
template <typename T>
class Calculator {
    T first, second;
public:
    Calculator(T a, T b) : first(a), second(b) {}
    T add() const { return first + second; }
    T subtract() const { return first - second; }
    T multiply() const { return first * second; }
    double divide() const {
        if (second == T{}) throw runtime_error("Cannot divide by zero.");
        return static_cast<double>(first) / second;
    }
};
int main() {
    Calculator<int> integers(15, 4);
    Calculator<double> decimals(7.5, 2.5);
    cout << "Integer addition: " << integers.add() << '\n';
    cout << "Integer subtraction: " << integers.subtract() << '\n';
    cout << "Integer multiplication: " << integers.multiply() << '\n';
    try {
        cout << "Integer division: " << integers.divide() << '\n';
        cout << "Decimal addition: " << decimals.add() << '\n';
        cout << "Decimal subtraction: " << decimals.subtract() << '\n';
        cout << "Decimal multiplication: " << decimals.multiply() << '\n';
        cout << "Decimal division: " << decimals.divide() << '\n';
        Calculator<int> zeroDivisor(10, 0);
        zeroDivisor.divide();
    } catch (const exception& error) { cout << "Error: " << error.what() << '\n'; }
}
