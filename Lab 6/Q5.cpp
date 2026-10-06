#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    void showPerson(string name) {
        cout << "Name: " << name << endl;
    }
};

class Teacher : virtual public Person {
public:
    void teach(string subject) {
        cout << "Teaches: " << subject << endl;
    }
};

class Student : virtual public Person {
public:
    void study(string course) {
        cout << "Studies: " << course << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void work() {
        cout << "Works as both Teacher and Student" << endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.showPerson("Aman");
    ta.teach("C++");
    ta.study("Computer Science");
    ta.work();

    return 0;
}
