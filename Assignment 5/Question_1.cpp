#include <iostream>
#include <string>
using namespace std;
class Print {
public:
    void display(int value) { cout << "Integer: " << value << '\n'; }
    void display(double value) { cout << "Double: " << value << '\n'; }
    void display(const string& value) { cout << "String: " << value << '\n'; }
};
int main() {
    Print printer;
    printer.display(10);
    printer.display(3.14);
    printer.display(string("Hello, C++!"));
}
