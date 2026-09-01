#include <iostream>

using namespace std;

class callingPrivateMember{

    void PrivateMember(){
        cout<<"This is Priveate Memeber Function"<<endl;
    }

    public:

    void PublicMember(){

        PrivateMember();
        cout<<"This is Public Member Function"<<endl;
    }
};

int main(){

    callingPrivateMember obj;
    obj.PublicMember();

    return 0;
}