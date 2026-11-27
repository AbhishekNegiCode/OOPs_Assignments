#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() const { cout << "Animal makes a sound.\n"; }
    virtual ~Animal() = default;
};
class Dog : public Animal {
public:
    void sound() const override { cout << "Dog: Woof!\n"; }
};
class Cat : public Animal {
public:
    void sound() const override { cout << "Cat: Meow!\n"; }
};
int main() {
    Dog dog;
    Cat cat;
    Animal* animal = &dog;
    animal->sound();
    animal = &cat;
    animal->sound();
}
