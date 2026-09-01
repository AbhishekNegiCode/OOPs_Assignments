#include <iostream>

using namespace std;

class student{
    string name;
    int marks;

    public:

    student(string name,int marks): name(name),marks(marks){};

    friend void display(student s);
};

void display(student s){

    cout<<"Student Name is - "<<s.name<<endl;
    cout<<"Student RollNo is - "<<s.marks<<endl;
}

int main(){

    student s("Abhishek",100);
    display(s);
    
    return 0;
}