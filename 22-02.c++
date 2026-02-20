#include<iostream>
using namespace std;
class Rectangle{
    public:
        int length;
        int breadth;
        int area;
    void input(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    void calculateArea(){
        area = length*breadth;
    }
    void display(){
        cout<<"Area:"<<area;
    }
};
int main(){
    Rectangle r1;
    r1.input();
    r1.calculateArea();
    r1.display();
    return 0;
}