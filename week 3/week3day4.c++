#include<iostream>
using namespace std;
class A{
    public:
    void displayA(){
        cout<<"Class A displayed."<<endl;
    }
};
class B : public A{
    public:
    void displayB(){
        cout<<"Class B displayed. Derived from A"<<endl;
    }
};
class C : public B{
    public:
    void displayC(){
        cout<<"Class C is derived from B"<<endl;
    }
};
int main(){
    C c1;
    c1.displayA();
    c1.displayB();
    c1.displayC();
}