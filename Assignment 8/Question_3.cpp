#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        int number;
        cout << "Enter an integer from 0 to 100: ";
        if (!(cin >> number)) throw invalid_argument("Input must be an integer.");
        if (number < 0) throw underflow_error("Number is negative.");
        if (number > 100) throw overflow_error("Number is greater than 100.");
        cout << "Valid number: " << number << '\n';
    } catch (const underflow_error& error) { cout << "Negative number: " << error.what() << '\n'; }
      catch (const overflow_error& error) { cout << "Too large: " << error.what() << '\n'; }
      catch (const invalid_argument& error) { cout << "Invalid input: " << error.what() << '\n'; }
}
