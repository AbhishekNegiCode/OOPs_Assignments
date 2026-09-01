#include <iostream>

using namespace std;

void forloop(){

    for(int i=0;i<5;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    int i;

    for(i=0;i<5;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    int j=0;
    for(;j<5;){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
}

void whileloop(){

    int i = 0;
    while(i<5){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
}

void dowhileloop(){
    
    int i = 0;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<5);
}

int main(){

    cout<<"For loop"<<endl;
    forloop();
    cout<<"While loop"<<endl;
    whileloop();
    cout<<"Do while loop"<<endl;
    dowhileloop();

    return 0;
}