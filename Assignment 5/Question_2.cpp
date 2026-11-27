#include <iostream>
using namespace std;
class Area {
public:
    // An integer argument selects a square; a double selects a circle.
    double calculate(int side) { return static_cast<double>(side) * side; }
    double calculate(double length, double width) { return length * width; }
    double calculate(double radius) { return 3.141592653589793 * radius * radius; }
};
int main() {
    Area area;
    cout << "Square area: " << area.calculate(5) << '\n';
    cout << "Rectangle area: " << area.calculate(6.0, 4.0) << '\n';
    cout << "Circle area: " << area.calculate(3.0) << '\n';
}
