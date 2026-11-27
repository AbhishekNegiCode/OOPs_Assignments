#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> numbers = {20, 30, 40};
    numbers.push_front(10);
    numbers.push_back(50);
    cout << "After insertion: ";
    for (int number : numbers) cout << number << ' ';
    numbers.remove(30);
    cout << "\nAfter removing 30: ";
    for (int number : numbers) cout << number << ' ';
    cout << '\n';
}
