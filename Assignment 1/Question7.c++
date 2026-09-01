#include <iostream>

using namespace std;

class Complex{

    int real;
    int imaginary;

    public:

    Complex(){
        cout<<"Enter real part"<<endl;
        cin>>real;
        cout<<"Enter imaginary part"<<endl;
        cin>>imaginary;
    }

    void set(){
        cout<<"Enter real part"<<endl;
        cin>>real;
        cout<<"Enter imaginary part"<<endl;
        cin>>imaginary;
    }

    void display(){

        cout<<real;
        if(imaginary>=0){
            cout<<"+"<<imaginary<<"i";
        }else{
            cout<<"-"<<-imaginary<<"i";
        }
        cout<<endl;
    }

    Complex sum(Complex com2){

        Complex result;

        result.real = real + com2.real;
        result.imaginary = imaginary + com2.imaginary;

        return result;
    }
};

int main(){

    Complex com1,com2,com3;

    cout<<"first complex number"<<endl;
    com1.set();
    com1.display();
    cout<<"second complex number"<<endl;
    com2.set();
    com2.display();
    com3 = com1.sum(com2);
    cout<<"sum"<<endl;
    com3.display();

    return 0;
}