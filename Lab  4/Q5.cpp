//Input a number and check whether it is Armstrong or not using a copy constructor
#include <iostream>
using namespace std;

class Armstrong
{
    int num;

public:
    Armstrong()
    {
        num = 0;
    }

    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Copy Constructor
    Armstrong(const Armstrong &obj)
    {
        num = obj.num;
    }

    void check()
    {
        int n = num;
        int sum = 0;
        int digits = 0;

        int temp = num;

        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0)
        {
            int digit = temp % 10;
            int power = 1;

            for (int i = 0; i < digits; i++)
                power *= digit;

            sum += power;
            temp /= 10;
        }

        if (sum == n)
            cout << n << " is an Armstrong number.";
        else
            cout << n << " is not an Armstrong number.";
    }
};

int main()
{
    Armstrong a1;

    a1.input();

    Armstrong a2(a1);   // Copy constructor

    a2.check();

    return 0;
}