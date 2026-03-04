#include<iostream>
using namespace std;
int main (){
    const float pi = 3.14159;
    int radius;
    float area;
    cout<<"Enter radius: ";
    cin>>radius;
    area = pi * (radius*radius);
    cout<<"Area: "<<area;
    return 0;
}