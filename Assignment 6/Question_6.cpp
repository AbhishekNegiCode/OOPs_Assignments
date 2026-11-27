#include <iostream>
using namespace std;
class Student {
    double CGPA;
public:
    explicit Student(double cgpa) : CGPA(cgpa) {}
    bool operator==(const Student& other) const { return CGPA == other.CGPA; }
    bool operator>(const Student& other) const { return CGPA > other.CGPA; }
};
int main() {
    Student first(8.5), second(9.0);
    if (first == second) cout << "Both students have the same CGPA.\n";
    else if (first > second) cout << "First student has the higher CGPA.\n";
    else cout << "Second student has the higher CGPA.\n";
}
