#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void start(){
        cout<<"The vehicle is started"<<endl;
    }
};
class Car : public Vehicle{
    public:
    void start() override{
        cout<<"The car starts with a key or push button"<<endl;
    }
};
class Bike : public Vehicle{
    public:
    void start() override{
        cout<<"The bike starts with a kickstart or push button"<<endl;
    };
};
int main(){
    Vehicle* v;
    Car c;
    Bike b;
    v = &c;
    v->start();
    v=&b;
    v->start();
}
