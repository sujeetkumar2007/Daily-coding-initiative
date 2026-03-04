#include<iostream>
using namespace std;
class Student{
    public:
        string Name;
        int Roll;
    Student(string name, int roll){
        Name = name;
        Roll = roll;
    }
    void display(){
        cout<<"Name:"<<Name<<endl;
        cout<<"Roll Number:"<<Roll;
    }
};
int main (){
    Student s1("Paul", 101);
    s1.display();
    return 0;
}