#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Sound of the animal!"<<endl;
    }
};
class Dog : public Animal{
    public:
    void sound() override{
        cout<<"The dog barks!"<<endl;
    }
};
class Cat : public Animal{
    public: 
    void sound() override {
        cout<<"The cat meows!"<<endl;
    }
};
int main (){
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
    Cat c;
    a=&c;
    a->sound();
}