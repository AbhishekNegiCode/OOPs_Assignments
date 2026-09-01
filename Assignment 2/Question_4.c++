#include <iostream>

using namespace std;

class box{
    int length;
    int breadth;
    int height;

    public:

    box(){

        length = 10;
        breadth = 20;
        height = 5;
    }

    box(int length,int breadth,int height){
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    void volumn(){
        cout<<"Volumn of the box is - "<<length*breadth*height<<endl;
    }
};

int main(){

    int length = 15;
    int breadth = 25;
    int height = 5;

    box obj;
    box obj2(length,breadth,height);
    obj.volumn();
    obj2.volumn();

    return 0;
}