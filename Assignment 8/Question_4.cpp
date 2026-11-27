#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    int values[] = {10, 20, 30, 40, 50};
    try {
        int index;
        cout << "Enter an index (0-4): ";
        if (!(cin >> index)) throw invalid_argument("Index must be an integer.");
        if (index < 0 || index >= 5) throw out_of_range("Array index is outside 0-4.");
        cout << "Element: " << values[index] << '\n';
    } catch (const exception& error) { cout << "Error: " << error.what() << '\n'; }
}
