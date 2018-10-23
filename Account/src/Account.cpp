#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(int balance)
    :accountBalance(balance)
{

}

int Account::initialBalance()
{
    cout<<"Please input your accountBalance: "<<endl;
    cin>>accountBalance;
    if(accountBalance<0)
    {
        cout<<"The balance is Invalid!"<<endl;
        accountBalance=0;
    }
    return accountBalance;
}

int Account::credit()
{
    cout<<"Please input your TransferAmount: "<<endl;
    cin>>addBalance;
    accountBalance=accountBalance+addBalance;

    return accountBalance;
}

int Account::debit()
{
    cout<<"Please input your OutAmount: ";
    cin>>outBalance;
    if(outBalance>accountBalance)
    {
        cout<<"Debit amount exceeded account balance!"<<endl;
    }
    else
    {
        accountBalance=accountBalance-outBalance;
    }
    return accountBalance;
}

int Account::getBalance()
{
    return accountBalance;
}

void Account::displayMessage()
{
    cout<<"Your Account Balance is: "<<getBalance()<<"!"<<endl;
}




























