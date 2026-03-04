#include<iostream>
using namespace std;
class BankAccount{
    int accNum;
    int bal;
    
    public:
    int dep;
    BankAccount(int a,int b){
        accNum = a;
        bal= b;
    }
    BankAccount(BankAccount &b){
        accNum = b.accNum;
        bal = b.bal;
    }
    void deposit(){
        cout<<"Enter the amount to be deposited: "<<endl;
        cin>>dep;
        bal = bal+dep;
        cout<<"Updated balance: "<<bal<<endl;
    }
    void display(){
        cout<<"Balance of copied account: "<<bal<<endl;
    }
};
int main(){
    BankAccount b1(895,1000);
    b1.deposit();
    cout << "\nCreating Copy of Account..." << endl;
    BankAccount b2 = b1;
    b2.display();
}