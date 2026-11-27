#include <iostream>
using namespace std;
class Maximum {
public:
    int findMax(int a, int b) { return a > b ? a : b; }
    int findMax(int a, int b, int c) { return findMax(findMax(a, b), c); }
    double findMax(double a, double b) { return a > b ? a : b; }
};
int main() {
    Maximum maximum;
    cout << "Two integers: " << maximum.findMax(10, 20) << '\n';
    cout << "Three integers: " << maximum.findMax(30, 20, 15) << '\n';
    cout << "Two decimals: " << maximum.findMax(4.5, 6.2) << '\n';
}
