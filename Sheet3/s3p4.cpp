#include<iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    float balance;
    public:
    BankAccount(int acc,float bal){
        accountNumber=acc;
        balance=bal;
    }
    void deposit(float amount){
        balance=balance+amount;
    }
    void withdraw(float amount){
        if(amount<=balance){
            balance=balance-amount;
        }
        else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void displayBalance(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    int acc;
    float bal,dep,wit;

    cout<<"Enter account number: ";
    cin>>acc;

    cout<<"Enter initial balance: ";
    cin>>bal;

    BankAccount b(acc,bal);

    cout<<"Enter deposit amount: ";
    cin>>dep;
    b.deposit(dep);

    cout<<"Enter withdrawal amount: ";
    cin>>wit;
    b.withdraw(wit);

    b.displayBalance();

    return 0;
}