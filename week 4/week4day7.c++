#include<iostream>
using namespace std;
class Employee{
    public: 
    virtual void calculateSalary() = 0;
};
class FullTimeEmployee: public Employee{
    public:
    float fullTimesalary;
    FullTimeEmployee(float salary){
        fullTimesalary = salary;
    }
    void calculateSalary() override{
        cout<<"Salary of full time employee: "<<fullTimesalary<<endl;
    }
};
class PartTimeEmployee: public Employee{
    public:
    int hoursWorked;
    float hourlySalary;
    PartTimeEmployee(int a, float b){
        hourlySalary = b;
        hoursWorked =a;
    }
    void calculateSalary() override{
        cout<<"Salary of part time employee: "<<hourlySalary*hoursWorked<<endl;

    }

};
int main(){
    Employee* e;
    FullTimeEmployee f(50000);
    PartTimeEmployee p(5,1000);
    e =&f;
    e->calculateSalary();
    e =&p;
    e->calculateSalary();
}