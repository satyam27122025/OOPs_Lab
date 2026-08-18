#include <iostream>
using namespace std;

class ArraySum {
private:
    int arr[10];
    int sum;

public:
    void input() {
        cout << "Enter 10 elements:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void calculateSum() {
        sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += arr[i];
        }
    }

    void display() {
        cout << "Sum of all 10 elements: " << sum << endl;
    }
};

int main() {
    ArraySum obj;
    obj.input();
    obj.calculateSum();
    obj.display();
    return 0;
}