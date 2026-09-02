//Add two times using a friend function
#include <iostream>
using namespace std;

class Time
{
    int hr, min;

public:
    void input()
    {
        cout << "Enter hours and minutes: ";
        cin >> hr >> min;
    }

    void display()
    {
        cout << hr << " hours " << min << " minutes";
    }

    friend Time add(Time, Time);
};

Time add(Time t1, Time t2)
{
    Time t;

    t.min = t1.min + t2.min;
    t.hr = t1.hr + t2.hr + t.min / 60;
    t.min = t.min % 60;

    return t;
}

int main()
{
    Time t1, t2, t3;

    t1.input();
    t2.input();

    t3 = add(t1, t2);

    cout << "\nSum of time = ";
    t3.display();

    return 0;
}