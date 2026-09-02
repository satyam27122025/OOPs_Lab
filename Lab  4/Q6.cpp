//Demonstrate all constructors in a program
#include <iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:

    // Default Constructor
    Student()
    {
        roll = 0;
        marks = 0;
        cout << "\nDefault Constructor Called";
    }

    // Parameterized Constructor
    Student(int r, float m)
    {
        roll = r;
        marks = m;
        cout << "\nParameterized Constructor Called";
    }

    // Copy Constructor
    Student(const Student &s)
    {
        roll = s.roll;
        marks = s.marks;
        cout << "\nCopy Constructor Called";
    }

    void display()
    {
        cout << "\nRoll = " << roll;
        cout << "\nMarks = " << marks << endl;
    }
};

int main()
{
    // Default constructor
    Student s1;
    s1.display();

    // Parameterized constructor
    Student s2(101, 89.5);
    s2.display();

    // Copy constructor
    Student s3(s2);
    s3.display();

    return 0;
}