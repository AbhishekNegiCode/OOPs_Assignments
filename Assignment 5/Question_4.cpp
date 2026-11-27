#include <iostream>
using namespace std;
class Marks {
public:
    void result(double a) { cout << "Marks: " << a << '\n'; }
    void result(double a, double b) { cout << "Average: " << (a + b) / 2 << '\n'; }
    void result(double a, double b, double c) {
        cout << "Average: " << (a + b + c) / 3 << '\n';
    }
};
int main() {
    Marks marks;
    marks.result(80);
    marks.result(80, 90);
    marks.result(80, 90, 70);
}
