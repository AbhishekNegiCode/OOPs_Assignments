#include <iostream>

using namespace std;

class collage{
    public:
    string name;
    collage(string name){
        cout<<"Calling collage constructor"<<endl;
        this->name = name;
        cout<<"Collage name - "<<name<<endl;
    }
};

class department : public collage{
    string dept_name;

    public:
    department(string name,string dept_name) : collage(name){
        cout<<"Calling department constructor"<<endl;
        this->dept_name = dept_name;
        cout<<"Department name - "<<dept_name<<endl;
    }
};

int main(){

    department obj("Thapar University","Computer Science");

    return 0;
}