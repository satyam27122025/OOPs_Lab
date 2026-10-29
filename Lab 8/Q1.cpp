#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

struct Subject {
    string name;
    double marks;
};

struct Student {
    string name;
    int rollNumber;
    vector<Subject> subjects;
    double cgpa;
};

int main() {
    Student student;
    int subjectCount;

    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter roll number: ";
    if (!(cin >> student.rollNumber)) {
        cerr << "Invalid roll number.\n";
        return 1;
    }

    cout << "Enter number of subjects: ";
    if (!(cin >> subjectCount) || subjectCount <= 0) {
        cerr << "Number of subjects must be greater than zero.\n";
        return 1;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < subjectCount; ++i) {
        Subject subject;

        cout << "Enter subject " << i + 1 << " name: ";
        getline(cin, subject.name);

        cout << "Enter marks for " << subject.name << " (0-100): ";
        if (!(cin >> subject.marks) ||
            subject.marks < 0 || subject.marks > 100) {
            cerr << "Marks must be a number between 0 and 100.\n";
            return 1;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        student.subjects.push_back(subject);
    }

    cout << "Enter CGPA (0-10): ";
    if (!(cin >> student.cgpa) || student.cgpa < 0 || student.cgpa > 10) {
        cerr << "CGPA must be a number between 0 and 10.\n";
        return 1;
    }

    cout << "\n--- Student Information ---\n";
    cout << "Name: " << student.name << '\n';
    cout << "Roll Number: " << student.rollNumber << '\n';
    cout << "Subjects and Marks:\n";

    for (const Subject& subject : student.subjects) {
        cout << "  " << subject.name << ": "
             << fixed << setprecision(2) << subject.marks << '\n';
    }

    cout << "CGPA: " << fixed << setprecision(2) << student.cgpa << '\n';

    return 0;
}
