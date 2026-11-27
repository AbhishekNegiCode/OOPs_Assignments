#include <iostream>
using namespace std;
class Counter {
    int count;
public:
    explicit Counter(int n) : count(n) {}
    // Prefix unary operator.
    Counter& operator++() { ++count; return *this; }
    void display() const { cout << count << '\n'; }
};
int main() {
    Counter object(5);
    cout << "Before: "; object.display();
    ++object;
    cout << "After: "; object.display();
}
