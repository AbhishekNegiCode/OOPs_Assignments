#include <iostream>

using namespace std;

class snippet{
     void pvt(){
        int a = 10;
        cout<<"This is a private member function"<<endl;
     }

     public:
     void pub(){
        cout<<"This is a public member funciton"<<endl;
        pvt();
     }
};

int main(){

    snippet s;
    s.pub();
    
    return 0;
}