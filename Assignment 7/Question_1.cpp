#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() const { cout << "Current month is October\n"; }
    virtual ~Base() = default;
};
class Derived : public Base {
public:
    void show() const override { cout << "Next month will be November\n"; }
};
int main() {
    Base current;
    Derived next;
    current.show();
    next.show();
}
