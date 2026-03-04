#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    Employee(int a, int  b){
        id = a;
        salary = b;
    }
    Employee(Employee &e){
        id = e.id;
        salary = e.salary;
        cout<<"copy constructor called"<<endl;
    }
    void display(){
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    Employee e1(895,500000);
    Employee e2 = e1;
    e1.display();
    e2.display();
}