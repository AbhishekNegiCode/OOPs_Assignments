#include <iostream>

using namespace std;

class vehicle{
    public:
    string brand = "BMW";
    int model = 2026;
};

class car : public vehicle{
    public:
    int Number_of_doors = 5;

    void display(){
        cout<<"Brand - "<<brand<<endl;
        cout<<"Model - "<<model<<endl;
        cout<<"Number of doors - "<<Number_of_doors<<endl;
    }
};

class bike : public vehicle{
    public:
    int engine_capacity = 900;

    void display(){
        cout<<"Brand - "<<brand<<endl;
        cout<<"Model - "<<model<<endl;
        cout<<"Engine Capacity - "<<engine_capacity<<endl;
    }
};

int main(){

    car obj1;
    bike obj2;
    obj1.display();
    obj2.display();
    return 0;
}