#include <iostream>

using namespace std;

class acadamics{
    public:
    int marks = 99;
};

class sports{
    public:
    int sportsmarks = 100;
};

class result : public acadamics , public sports{
    public:
    int resultmarks = marks+sportsmarks;

    void display(){
        cout<<"result = "<<resultmarks<<endl;
    }
};

int main(){

    result obj;
    obj.display();
    
    return 0;
}