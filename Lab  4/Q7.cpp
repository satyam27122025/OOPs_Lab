//Input an array and find the sum of all elements using constructor, object pointer and friend function
#include <iostream>
using namespace std;

class Array
{
    int a[100];
    int n;

public:

    // Constructor
    Array(int size)
    {
        n = size;

        cout << "Enter array elements:\n";
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void display()
    {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    friend int sum(Array *);
};

int sum(Array *obj)
{
    int total = 0;

    for (int i = 0; i < obj->n; i++)
        total += obj->a[i];

    return total;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    // Object pointer
    Array *p = new Array(n);

    p->display();

    cout << "Sum of array elements = " << sum(p);

    delete p;

    return 0;
}