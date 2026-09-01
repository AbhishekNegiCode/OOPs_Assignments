#include <iostream>

using namespace std;

class student{
    string name;
    int rollno;

    public:

    student(){
        cout<<"Enter name of student"<<endl;
        cin>>name;
        cout<<"Enter rollno of student"<<endl;
        cin>>rollno;
    }

    void display(){
        cout<<"Name of student is - "<<name<<endl;
        cout<<"Rollno of student is - "<<rollno<<endl;
    }
};

int main(){

    student s;
    s.display();

    return 0;
}