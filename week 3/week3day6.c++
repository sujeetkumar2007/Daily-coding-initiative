#include<iostream>
using namespace std;
class Base{
    protected:
    int c = 12;
    private:
    int b = 11;
    public:
    int a = 10;
};
class Derived1 : public Base{
    public:
    void display(){
        // b is inaccessible cuz  its private.
    cout<<"Derived from protected: "<<c<<endl;
    cout<<"Derived from public:"<<a<<endl;
} 
};
int main(){
    Derived1 d1;
    d1.display();
}