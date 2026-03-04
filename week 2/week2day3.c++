#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    int price;
    Car(string a, int b){
        brand = a;
        price = b;
        cout<<"Brand:"<<brand<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main(){
    Car c1("Lamborghini",1500000);
    return 0;
}
