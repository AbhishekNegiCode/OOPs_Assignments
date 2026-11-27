#include <iostream>
using namespace std;
class Person {
public:
    virtual ~Person() { cout << "Person destructor executed.\n"; }
};
class Student : public Person {
public:
    ~Student() override { cout << "Student destructor executed.\n"; }
};
int main() {
    Person* person = new Student;
    delete person;
    // The virtual destructor ensures Student is destroyed first, then Person.
    // Derived-class resources are released before the base-class part is destroyed.
}
