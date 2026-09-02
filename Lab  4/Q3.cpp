//Add two matrices using a friend function
#include <iostream>
using namespace std;

class Matrix
{
    int a[10][10];
    int r, c;

public:
    void input()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
        }
    }

    void display()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix add(Matrix, Matrix);
};

Matrix add(Matrix m1, Matrix m2)
{
    Matrix m3;

    m3.r = m1.r;
    m3.c = m1.c;

    for (int i = 0; i < m1.r; i++)
    {
        for (int j = 0; j < m1.c; j++)
            m3.a[i][j] = m1.a[i][j] + m2.a[i][j];
    }

    return m3;
}

int main()
{
    Matrix m1, m2, m3;

    cout << "First Matrix\n";
    m1.input();

    cout << "\nSecond Matrix\n";
    m2.input();

    m3 = add(m1, m2);

    cout << "\nResultant Matrix:\n";
    m3.display();

    return 0;
}