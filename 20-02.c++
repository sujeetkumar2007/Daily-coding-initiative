#include<iostream>
using namespace std;
class Employee{
    public:
        string Name;
        int Salary;
        void getData(){
            cout<<"Enter name:";
            cin>>Name;
            cout<<"Enter salary:";
            cin>>Salary;
        }
        void displayData(){
            cout<<"Name:"<<Name<<endl;
            cout<<"Salary:"<<Salary;

        }
};
int main(){
    Employee e1;
    e1.getData();
    e1.displayData();
    return 0;
}