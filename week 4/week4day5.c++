#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;
class Shape{
    public:
    virtual void Area(){
        cout<<"Area of the shape"<<endl;
    }
};
class Rectangle : public Shape{
    private:
    int l;
    int b;
    public:
    Rectangle(int a, int c){
        l = a;
        b = c;
    }
    void Area() override{
        cout<<"The area of Rectangle is "<<l*b<<endl;
    }
};
class Circle : public Shape{
    private:
    float r;
    public:
    Circle(int a){
        r=a;
    }
    void Area() override {
        cout<<"The area of the circle is "<<pi*pow(r,2)<<endl;
    }
};
int main(){
    Shape* s;
    Rectangle r(5,2);
    s = &r;
    s->Area();
    Circle c(5);
    s = &c;
    s->Area();
}
