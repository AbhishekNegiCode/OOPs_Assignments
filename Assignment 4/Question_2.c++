#include <iostream>

using namespace std;

class person{
    public:
    string name = "Abhishek";
};

class employee : public person{
    public:
    int employeeid = 10006;
};

class manager : public employee{
    public:
    string department = "MCA";

    void display(){
        cout<<"Name of person - "<<name<<endl;
        cout<<"Employee ID is - "<<employeeid<<endl;
        cout<<"Department - "<<department<<endl;
    }
};


int main(){
    manager obj;
    obj.display();
    
    return 0;
}