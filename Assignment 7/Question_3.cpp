#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() const = 0;
    virtual ~Shape() = default;
};
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void area() const override { cout << "Rectangle area: " << length * width << '\n'; }
};
class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    void area() const override {
        cout << "Circle area: " << 3.141592653589793 * radius * radius << '\n';
    }
};
int main() {
    Rectangle rectangle(6, 4);
    Circle circle(3);
    Shape* shape = &rectangle;
    shape->area();
    shape = &circle;
    shape->area();
}
