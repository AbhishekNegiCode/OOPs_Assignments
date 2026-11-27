#include <iostream>
#include <string>
using namespace std;
template <typename T, typename U>
class Pair {
    T first;
    U second;
public:
    Pair(const T& a, const U& b) : first(a), second(b) {}
    void display() const { cout << "First: " << first << "\nSecond: " << second << '\n'; }
};
int main() {
    Pair<int, string> student(101, "Abhishek");
    student.display();
}
