#include<iostream>
using namespace std;
class Box{
    private:
    float length;
    float width;
    
    public:

    Box(float a , float b){
        length =a;
        width = b;
    }
     friend void display(Box b);
    
};
void display(Box a){
    float area = a.length*a.width;
    cout<<"The area is "<<area<<endl;
}
int main(){
    Box a(5,2);
    display(a);

}
