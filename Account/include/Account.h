#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using std::string;

class Account
{
    public:
        Account(int accountBalance);
        int initialBalance();
        int credit();
        int debit();
        int getBalance();
        void displayMessage();


    private:
        int accountBalance;
        int addBalance;
        int outBalance;
        int endBalance;
};

#endif // ACCOUNT_H
