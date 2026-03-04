#include<iostream>
using namespace std;
class Student{
    public:
    int marks;
    Student(){
        marks = 0;
        cout<<"Marks initialized to: "<<marks;
    }
};
int main(){
    Student s1;
}