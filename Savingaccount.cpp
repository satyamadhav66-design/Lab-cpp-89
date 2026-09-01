#include <iostream>
using namespace std;
class SavingAccount{
private:
string accountHolderName;
int accountNumbar;
double balance;
double interestRate;
public:
SavingAccount(string name,int accNumber,double initialBalance,double initialBalance,double rate){
    accountHolderName=name;
    accNumber=accNumber;
    balance=initialBalance;
    interestRate=rate;
}
void deposit(double amount){
    if(amount>0){
        balance+=amount;
        cout<<"Deposited:₹"<<amount<<endl;
    }
void withdraw(double amount){
    double total=amount+transactionFee;
    if(total<=balance){
        balance-=total;
        cout<<"Withdrawn:₹"<<amount<<"(₹"<<transactionFee<<"fee applied)"<<endl;
    }
}
void withdraw(double amount){
    if(amount>0 && amount<<endl;
    }else{
        cout
    }
}
}
}