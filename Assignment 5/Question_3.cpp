#include <iostream>
using namespace std;
class Calculator {
public:
    int sum(int a, int b) { return a + b; }
    int sum(int a, int b, int c) { return a + b + c; }
    double sum(double a, double b) { return a + b; }
};
int main() {
    Calculator calculator;
    cout << "Two integers: " << calculator.sum(10, 20) << '\n';
    cout << "Three integers: " << calculator.sum(10, 20, 30) << '\n';
    cout << "Two decimals: " << calculator.sum(2.5, 3.7) << '\n';
}
