#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        int age;
        cout << "Enter age: ";
        if (!(cin >> age)) throw invalid_argument("Enter an integer age.");
        if (age < 0) throw out_of_range("Age cannot be negative.");
        cout << "Age: " << age << '\n';
    } catch (const exception& error) { cout << "Error: " << error.what() << '\n'; }
}
