#include <iostream>
using namespace std;
template <typename T>
T maximum(T a, T b) { return a > b ? a : b; }
int main() {
    cout << "Integer maximum: " << maximum(10, 20) << '\n';
    cout << "Floating-point maximum: " << maximum(4.5, 2.3) << '\n';
}
