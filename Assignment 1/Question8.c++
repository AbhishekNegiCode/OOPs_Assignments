#include <iostream>

using namespace std;

namespace first{

    int value = 100;

    void display(){
        cout<<"Using first namespace"<<endl;
        cout<<"Value is = "<<value<<endl;
    }
}

namespace second{

    int value = 200;

    void display(){
        cout<<"Using second namespace"<<endl;
        cout<<"Value is = "<<value<<endl;
    }
}
int main(){

    cout<<"First namespace value = "<<first::value<<endl;

    first::display();

    cout<<"Second namespace value = "<<second::value<<endl;

    second::display();

    return 0;
}