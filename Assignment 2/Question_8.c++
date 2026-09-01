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

void createObjects() {
    cout << "\nInside function" << endl;

    Demo d3(3);
    Demo d4(4);

    cout << "Function is ending" << endl;
}

int main() {

    cout << "Inside main" << endl;

    Demo d1(1);
    Demo d2(2);

    createObjects();

    cout << "\nBack inside main" << endl;

    return 0;
}