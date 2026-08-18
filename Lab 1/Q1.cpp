#include <iostream>
using namespace std;
class number
{
    int n;
public:
 void input()
 {
    cout<<"enter the number:";
    cin>>n;
 }
 
    void display()
    {
        cout<<"the number is :";
    }
};
int main()
{
    number n;
    n.input();
    n.output();
return 0;
}