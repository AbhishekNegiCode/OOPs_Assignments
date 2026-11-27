#include <iostream>
using namespace std;
class Complex {
    double real, imaginary;
public:
    Complex(double r, double i) : real(r), imaginary(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    void display() const {
        cout << real << (imaginary < 0 ? " - " : " + ")
             << (imaginary < 0 ? -imaginary : imaginary) << "i\n";
    }
};
int main() {
    Complex first(3, 4), second(2, 5);
    cout << "First: "; first.display();
    cout << "Second: "; second.display();
    cout << "Sum: "; (first + second).display();
}
