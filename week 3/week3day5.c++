#include<iostream>
#include<math.h>
using namespace std;
class Shape{
    public:
    const int pi = 3.14;
    float area;
    void display(){
        cout<<"Area: "<<area<<endl;
    }
};
class Rectangle: public Shape{
    public:
    int l;
    int b;
    Rectangle(int a, int c){
        l=a;
        b=c;
        area =  l*b;
    }
};
class Circle: public Shape{
    public:
    float r;
    Circle(float n){
        r =n;
        area = pi*pow(r,2);
    } 
};
int main(){
    Rectangle r1(5,2);
    r1.display();
    Circle c1(5);
    c1.display();
}