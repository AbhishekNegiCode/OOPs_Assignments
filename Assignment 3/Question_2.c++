#include <iostream>

using namespace std;

class number{
    int a;
    int b;

    public:
    number(int a,int b):a(a), b(b){};

    friend void sum(number num1);

};

void sum(number num1){

    int sum = num1.a + num1.b;

    cout<<"Sum of numbers = "<<sum<<endl;
}

int main(){

    number num1(5,6);
    sum(num1);

    return 0;
}