#include <iostream>

using namespace std;

class rectangle{

    int length;
    int breadth;

    public:

    rectangle(int l,int b){
        length = l;
        breadth = b;

        cout<<"Area of rectangle is - "<<length*breadth<<endl;
    }
};

int main(){

    int l = 20;
    int b = 30;

    rectangle obj(l,b);

    return 0;
}