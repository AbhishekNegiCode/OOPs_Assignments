#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> numbers = {40, 10, 50, 20, 30};
    sort(numbers.begin(), numbers.end());
    cout << "Sorted elements: ";
    for (int number : numbers) cout << number << ' ';
    int target;
    cout << "\nEnter value to search: ";
    if (!(cin >> target)) { cout << "Invalid input.\n"; return 1; }
    if (binary_search(numbers.begin(), numbers.end(), target)) cout << "Value found.\n";
    else cout << "Value not found.\n";
}
