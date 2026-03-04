#include<iostream>
using namespace std;
class Employee{
    protected:
    int id;
    int salary;\
    public:
    Employee(int a,int b){
        id =a;
        salary =b;
    }
};
class Manager: public Employee{
    private:
    int bonus;
    public:
    Manager(int a, int b, int c) : Employee(a,b){
        bonus = c;
    }
    void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Final salary: "<<salary+bonus<<endl;
    }
};
int main(){
    Manager m1(1001,10000,5000);
    m1.display();
    return 0;
}

