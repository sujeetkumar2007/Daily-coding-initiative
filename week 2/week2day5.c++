#include<iostream>
using namespace std;
class Number{
    int number;
    public:
    Number(int n){
        number=n;
    }
    Number(Number &num){
        number = num.number;
        cout<<"Copy constructor made"<<endl;
    }
    void display(){
        cout<<"Number: "<<number<<endl;
    }
};
int main(){
    Number n1(5);
    Number n2 = n1;
    n1.display();
    n2.display();
}