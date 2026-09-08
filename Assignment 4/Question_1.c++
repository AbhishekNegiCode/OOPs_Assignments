#include <iostream>

using namespace std;

class person{
    public:
    string name;
    int age;
};

class student : public person{

    public:
    int rollno;
    string course;

    void getdetails(){
        cout<<"Enter name of Student"<<endl;
        cin>>name;
        cout<<"Enter age of Student"<<endl;
        cin>>age;
        cout<<"Enter rollno of Student"<<endl;
        cin>>rollno;
        cout<<"Enter course of Student"<<endl;
        cin>>course;
    }

    void display(){
        cout<<"Name of Student - "<<name<<endl;
        cout<<"Age of Student - "<<age<<endl;
        cout<<"Rollno of Student - "<<rollno<<endl;
        cout<<"Course of Student - "<<course<<endl;
    }
};

int main(){

    student obj;
    obj.getdetails();
    obj.display();

    return 0;
}