#include <iostream>
using namespace std;

class NumberReverser {
private:
    int num;

public:
    void input() {
        cout << "Enter an integer: ";
        cin >> num;
    }

    // Call by value/argument returning the reversed number
    int reverseNumber(int n) {
        int rev = 0;
        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }
        return rev;
    }

    void display() {
        int result = reverseNumber(num);
        cout << "Reversed Number: " << result << endl;
    }
};

int main() {
    NumberReverser obj;
    obj.input();
    obj.display();
    return 0;
}