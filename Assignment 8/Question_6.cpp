#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;
class Student {
    double marks[5]{};
public:
    void inputMarks() {
        for (int i = 0; i < 5; ++i) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            if (!(cin >> marks[i])) throw invalid_argument("Marks must be numeric.");
            if (!isfinite(marks[i]) || marks[i] < 0 || marks[i] > 100)
                throw out_of_range("Marks must be between 0 and 100.");
        }
    }
    double average() const {
        double total = 0;
        for (double mark : marks) total += mark;
        return total / 5;
    }
};
int main() {
    Student student;
    try {
        student.inputMarks();
        cout << "Average: " << student.average() << '\n';
    } catch (const exception& error) { cout << "Error: " << error.what() << '\n'; }
}
