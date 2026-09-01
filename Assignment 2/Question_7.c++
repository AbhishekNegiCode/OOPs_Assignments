#include <iostream>
using namespace std;

class Demo {
private:
    int id;

public:
    Demo(int i) {
        id = i;
        cout << "Constructor called for object " << id << endl;
    }

    ~Demo() {
        cout << "Destructor called for object " << id << endl;
    }
};

int main() {
    Demo d1(1);
    Demo d2(2);
    Demo d3(3);

    return 0;
}