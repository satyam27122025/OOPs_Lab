#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int code;
    string designation;
    int yearsOfExperience;
    int age;

public:
    void input() {
        cout << "Enter Employee Name: ";
        cin >> ws; 
        getline(cin, name);
        cout << "Enter Employee Code: ";
        cin >> code;
        cout << "Enter Designation: ";
        cin >> ws;
        getline(cin, designation);
        cout << "Enter Years of Experience: ";
        cin >> yearsOfExperience;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "\n--- Employee Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Designation: " << designation << endl;
        cout << "Years of Experience: " << yearsOfExperience << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Employee emp;
    emp.input();
    emp.display();
    return 0;
}