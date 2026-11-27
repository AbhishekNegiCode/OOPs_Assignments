#include <iostream>
#include <map>
#include <string>
#include <limits>
using namespace std;
int main() {
    map<int, string> students;
    while (true) {
        cout << "\n1. Insert student\n2. Search student\n3. Display all\n0. Exit\nChoice: ";
        int choice;
        if (!(cin >> choice)) {
            if (cin.eof()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter an integer choice.\n";
            continue;
        }
        if (choice == 0) break;
        if (choice == 1 || choice == 2) {
            int roll;
            cout << "Enter roll number: ";
            if (!(cin >> roll)) {
                if (cin.eof()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid roll number.\n";
                continue;
            }
            if (roll <= 0) { cout << "Roll number must be positive.\n"; continue; }
            if (choice == 1) {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                string name;
                cout << "Enter student name: ";
                if (!getline(cin, name)) break;
                if (name.find_first_not_of(" \t\r") == string::npos) {
                    cout << "Name cannot be empty.\n";
                    continue;
                }
                auto result = students.emplace(roll, name);
                cout << (result.second ? "Student inserted.\n" : "Roll number already exists.\n");
            } else {
                auto found = students.find(roll);
                if (found != students.end()) cout << "Name: " << found->second << '\n';
                else cout << "Student not found.\n";
            }
        } else if (choice == 3) {
            if (students.empty()) cout << "No records.\n";
            for (const auto& student : students)
                cout << student.first << " : " << student.second << '\n';
        } else cout << "Invalid choice.\n";
    }
}
