#include <iostream>

using namespace std;

class student{

    string name;
    int rollno;
    float cgpa;

    public:

    student(){
        name = "Default";
        rollno = 1;
        cgpa = 0.1;
    }

    student(string name, int rollno){
        this->name = name;
        this->rollno = rollno;
    }

    student(string name,int rollno,float cgpa){
        this->name = name;
        this->rollno = rollno;
        this->cgpa = cgpa;
    }

    void display(){
        cout<<"Name of student - "<<name<<endl;
        cout<<"Rollno of student - "<<rollno<<endl;
        cout<<"cgpa of student - "<<cgpa<<endl;
    }
};

int main(){

    student obj1;
    student obj2("Abhishek",6);
    student obj3("Abhishek",6,10.0);
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}