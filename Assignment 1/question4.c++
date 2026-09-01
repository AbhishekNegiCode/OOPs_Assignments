#include <iostream>

using namespace std;

class student
{
    string Name;
    int RollNo;
    string Degree;
    string Hostel;
    int CGPA;

    void addDetails(){
        cout<<"Enter your Name"<<endl;
        cin>>Name;
        cout<<"Enter your Roll No"<<endl;
        cin>> RollNo;
        cout<<"Enter your Degree"<<endl;
        cin>>Degree;
        cout<<"Enter your Hostel"<<endl;
        cin>>Hostel;
        cout<<"Enter you CGPA"<<endl;
        cin>>CGPA;
    }

    public:

    void getDetails(){
        addDetails();
    }

    void updateDetails(){
        cout<<"Choose what you want to update 1: Name 2: RollNo 3: Degree 4: Hostel 5: CGPA and Enter 0: To Exit -- ";

        int choice;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter new Name"<< endl;
            cin.ignore();
            getline(cin, Name);
            break;
        case 2:
            cout<<"Enter new RollNo"<<endl;
            cin>>RollNo;
            break;
        case 3:
            cout<<"Enter new Degree"<<endl;
            cin>>Degree;
            break;
        case 4:
            cout<<"Enter new Hostel"<<endl;
            cin>>Hostel;
            break;
        case 5:
            cout<<"Enter new CGPA"<<endl;
            cin>>CGPA;
            break;
        
        default:
            cout<<"Wrong input"<<endl;
            break;
        }
        if(choice == 0){
            return;
        }else{
            updateDetails();
        }
    }
    void Display(){
        cout<<"Name is - "<<Name<<endl;
        cout<<"RollNo is - "<<RollNo<<endl;
        cout<<"Degree is - "<<Degree<<endl;
        cout<<"Hostel is - "<<Hostel<<endl;
        cout<<"CGPA is - "<<CGPA<<endl;
    }
};


int main(){
    
    student s;
    s.getDetails();
    s.Display();
    s.updateDetails();
    s.Display();

    return 0;
}