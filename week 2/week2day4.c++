#include<iostream>
using namespace std;
class Cube{
    public:
    int side;
    int volume;
    Cube(){
        side = 1;
        volume = side*side*side;
        cout<<"Volume: "<<volume<<endl;
    }
    Cube(int s){
        side = s;
        volume = s*s*s;
        cout<<"Volume: "<<volume<<endl;
    }
};
int main(){
    Cube c1;
    Cube c2(5);//parameterized 
}