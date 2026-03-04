#include<iostream>
using namespace std;
class Car{
    public:
        string Brand;
        int Price;
        static int carCounter;
        int carNumber;
    Car(string car, int price){
        Brand = car;
        Price = price;
        carCounter++;
        carNumber = carCounter;
    }
    void display(){
        cout<<"Car "<<carNumber<<" Brand:"<<Brand<<endl;
        cout<<"Car "<<carNumber<<" Price:"<<Price<<endl;
    }
};
int Car:: carCounter =0;
int main(){
    Car c1("BMW",5000000);
    Car c2("AUDI",4500000);
    c1.display();
    c2.display();

    return 0;
}