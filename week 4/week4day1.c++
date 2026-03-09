#include<iostream>
using namespace std;
int square(int);
int main(){
    int r;
    cout<<"Enter number:";
    cin>>r;
    cout<<"Square = "<<square(r);
}
inline int square(int a){
    return a*a;
}