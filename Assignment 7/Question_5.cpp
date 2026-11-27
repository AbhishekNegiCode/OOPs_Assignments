#include <iostream>
#include <string>
using namespace std;
class Vehicle {
public:
    virtual void displayInfo() const = 0;
    virtual ~Vehicle() = default;
};
class Car : public Vehicle {
    string model;
    int seats;
public:
    Car(const string& m, int s) : model(m), seats(s) {}
    void displayInfo() const override { cout << "Car: " << model << ", seats: " << seats << '\n'; }
};
class Bike : public Vehicle {
    string model;
    int engineCC;
public:
    Bike(const string& m, int cc) : model(m), engineCC(cc) {}
    void displayInfo() const override { cout << "Bike: " << model << ", engine: " << engineCC << " cc\n"; }
};
class Bus : public Vehicle {
    string model;
    int capacity;
public:
    Bus(const string& m, int c) : model(m), capacity(c) {}
    void displayInfo() const override { cout << "Bus: " << model << ", capacity: " << capacity << '\n'; }
};
int main() {
    Car car("Swift", 5);
    Bike bike("Pulsar", 150);
    Bus bus("City Bus", 40);
    Vehicle* vehicle = &car;
    vehicle->displayInfo();
    vehicle = &bike;
    vehicle->displayInfo();
    vehicle = &bus;
    vehicle->displayInfo();
}
