#include <iostream>

using namespace std;

class bankaccount{
    int accountno;
    int balance;

    public:
    static int totalaccounts;

    bankaccount(int accountno, int balance){
        this->accountno = accountno;
        this->balance = balance;
        totalaccounts++;
    }

    friend void displayDetails(bankaccount b1,bankaccount b2, bankaccount b3);

    static void display(){

        cout<<"Number of accounts created = "<<totalaccounts<<endl;
    }
};

int bankaccount::totalaccounts = 0;

void displayDetails(bankaccount b1,bankaccount b2, bankaccount b3){

    cout<<"Account Number of b1 is "<<b1.accountno<<"Balance of b1 is "<<b1.balance<<endl;
    cout<<"Account Number of b1 is "<<b2.accountno<<"Balance of b1 is "<<b2.balance<<endl;
    cout<<"Account Number of b1 is "<<b3.accountno<<"Balance of b1 is "<<b3.balance<<endl;
}

int main(){

    bankaccount b1(101,100000);
    bankaccount b2(102,120000);
    bankaccount b3(103,130000);

    displayDetails(b1,b2,b3);
    bankaccount::display();

    return 0;

}