#include <iostream>
using namespace std;
class circle
{
    public:
    float radius;
 
 float pi=3.14;

 
 void input()
 {
    cout<<"enter the radius:";
    cin>>radius;
 }
 void display()
 {
    cout<<"the radius is : "<<radius;
    cout<<"\nthe area is :"<<area();
    cout<<"\nthe circumference is:"<<circumference();
 }
 float area()
 {
    return pi*radius*radius;
 }
 float circumference()
 {
    return 2*pi*radius;
 }


};
int main()
{
    circle c;
    c.input();
    c.display();
    c.area();
    c.circumference();
    return 0;
}
   