#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;

public:
    void studentDetails(string n) {
        name = n;
        cout << "Student Name: " << name << endl;
    }
};

class Performance : public Student {
protected:
    float percentage;

public:
    void calculatePercentage(float marks, float total) {
        percentage = (marks / total) * 100;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Graduation : public Performance {
public:
    void determineHonors() {
        if (percentage >= 75)
            cout << "Graduation Honors: Distinction" << endl;
        else if (percentage >= 60)
            cout << "Graduation Honors: First Class" << endl;
        else
            cout << "Graduation Honors: Pass" << endl;
    }
};

int main() {
    Graduation student;

    student.studentDetails("Rahul");
    student.calculatePercentage(450, 500);
    student.determineHonors();

    return 0;
}
