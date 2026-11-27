#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        double numerator, denominator;
        cout << "Enter numerator and denominator: ";
        if (!(cin >> numerator >> denominator)) throw invalid_argument("Enter two numbers.");
        if (denominator == 0) throw runtime_error("Cannot divide by zero.");
        cout << "Result: " << numerator / denominator << '\n';
    } catch (const exception& error) { cout << "Error: " << error.what() << '\n'; }
}
