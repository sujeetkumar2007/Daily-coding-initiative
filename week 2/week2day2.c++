#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int area;
    Rectangle(int l,int b){
        length = l;
        breadth = b;
        area = l*b;
        cout<<"Length: "<<l<<endl;
        cout<<"Breadth: "<<b<<endl;
        cout<<"Area: "<<area<<endl;
    }
};
int main(){
    Rectangle r1(10,5);
}
