//Add two complex numbers using a friend function
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }

    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex c1, c2, c3;

    c1.input();
    c2.input();

    c3 = add(c1, c2);

    cout << "\nSum = ";
    c3.display();

    return 0;
}