#include <iostream>

using namespace std;

class employee{

    string name;
    int id;
    int salary;

    public:

    employee(string name,int id, int salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    void display(){
        cout<<"Name of employee is - "<<name<<endl;
        cout<<"ID of employee is - "<<id<<endl;
        cout<<"Salary of employee is - "<<salary<<endl;
    }
};

int main(){

    string name = "Abhishek";
    int id = 6;
    int salary = 10000000;

    employee obj(name,id,salary);
    obj.display();

    return 0;
}