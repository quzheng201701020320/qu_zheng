#include <iostream>
#include"Account.h"

using namespace std;

int main()
{
    Account account1(2000);
    Account account2(-800);

    account1.initialBalance();
    account1.credit();
    account1.debit();
    account1.displayMessage();
    cout<<account1.getBalance()<<endl;


    account2.initialBalance();
    account2.credit();
    account2.debit();
    account2.displayMessage();
    cout<<account2.getBalance()<<endl;

    return 0;
}
