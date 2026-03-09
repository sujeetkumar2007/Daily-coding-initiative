#include<iostream>
using namespace std;
class Number{
    private:
    int a = 67;
    friend void display(Number n);
};
 
void display(Number n){
    cout<<"The value of a is "<<n.a;

}
int main (){
    Number s;
    display(s);
}