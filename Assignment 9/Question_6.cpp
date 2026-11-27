#include <iostream>
#include <stdexcept>
#include <cstddef>
using namespace std;
template <typename T, size_t Capacity>
class Stack {
    static_assert(Capacity > 0, "Capacity must be positive.");
    T elements[Capacity]{};
    size_t size = 0;
public:
    void push(const T& value) {
        if (size == Capacity) throw overflow_error("Stack overflow.");
        elements[size++] = value;
    }
    T pop() {
        if (size == 0) throw underflow_error("Stack underflow.");
        return elements[--size];
    }
    void display() const {
        if (size == 0) { cout << "Stack is empty.\n"; return; }
        cout << "Stack (top to bottom): ";
        for (size_t i = size; i > 0; --i) cout << elements[i - 1] << ' ';
        cout << '\n';
    }
};
int main() {
    Stack<int, 3> stack;
    stack.push(10); stack.push(20); stack.push(30);
    stack.display();
    try { stack.push(40); }
    catch (const overflow_error& error) { cout << error.what() << '\n'; }
    cout << "Popped: " << stack.pop() << '\n';
    stack.display();
    stack.pop(); stack.pop();
    stack.display();
    try { stack.pop(); }
    catch (const underflow_error& error) { cout << error.what() << '\n'; }
}
