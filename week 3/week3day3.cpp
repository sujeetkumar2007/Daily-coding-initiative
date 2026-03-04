#include<iostream>
using namespace std;
class Vehicle{
    public:
    void showType(){
        cout<<"Type:Car"<<endl;
    }
};
class Car: public Vehicle{
    public:
    void showBrand(){
        cout<<"Brand:Ferrari"<<endl;
    }
};
int main(){
    Car c1;
    c1.showType();
    c1.showBrand();
}