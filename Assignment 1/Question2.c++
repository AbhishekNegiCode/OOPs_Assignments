#include <iostream>

using namespace std;

void conversion(int c,float &f){
    
    f = ((9 * c)/5) +32;

    cout << "Termprature in Ferenheit is :- "<< f;
}

int main(){

    float f;
    int c;
    cout<<"Enter temprature in Celsius"<<endl;
    cin >> c;

    conversion(c,f);

    return 0;
}