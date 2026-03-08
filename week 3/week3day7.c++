#include<iostream>
using namespace std;
class BankAccount{
    protected:
    long long accountNumber;
    int balance;
    public:
    BankAccount(long long a, int b){
        accountNumber = a;
        balance =b;
    }
    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
class SavingsAccount: public BankAccount{
    public:
    float interest;
    SavingsAccount(long long a, int b) : BankAccount(a,b){}
    void simpleInterest(){
        float interest;
        int rate = 5;
        int time = 1;
        interest = (balance *rate*time)/100;
        cout<<"Yearly interest for the rate of 5% is: "<<interest<<endl;
    }
};
int main(){
    SavingsAccount s(2511003010895,50000);
    s.display();
    s.simpleInterest();
}