#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) {
    T temporary = a;
    a = b;
    b = temporary;
}
int main() {
    int a = 10, b = 20;
    char x = 'A', y = 'B';
    cout << "Before: " << a << ' ' << b << '\n';
    swapValues(a, b);
    cout << "After: " << a << ' ' << b << '\n';
    cout << "Before: " << x << ' ' << y << '\n';
    swapValues(x, y);
    cout << "After: " << x << ' ' << y << '\n';
}
