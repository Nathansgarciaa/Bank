#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
protected:
    static int nextAccountNumber;
    int accountNumber;
    string accountHolderName;
    double accountBalance;

public:
    BankAccount();
    BankAccount(string name, double balance);
    virtual ~BankAccount();

    double getBalance();
    void displayAccountInfo();
    virtual void deposit(double amount);
    virtual void withdraw(double amount);
};

#endif // BANKACCOUNT_H
