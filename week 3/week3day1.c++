#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(string a, int b){
        name =a;
        age =b;
    }
};
class Student: public Person{
    private:
    int rollnumber;
    public:
    Student(string a, int b, int c): Person(a, b){
        rollnumber = c;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<rollnumber<<endl;
    }

};
int main(){
    Student s1("Sujeet Kumar",18,895);
    s1.display();
}