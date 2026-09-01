#include <iostream>

using namespace std;

class employee{
    int salary;

    public:
    employee(int salary):salary(salary){};

    friend void compare(employee emp1,employee emp2);

};

void compare(employee emp1,employee emp2){

    if(emp1.salary > emp2.salary){
        cout<<"emp1 salary is greater then emp2"<<endl;
    }else{
        cout<<"emp2 salary is greater then emp1"<<endl;
    }
}

int main(){

    employee emp1(1500000);
    employee emp2(250000);

    compare(emp1,emp2);

    return 0;
}