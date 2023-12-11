#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
protected:
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    BankAccount();
    BankAccount(std::string accountHolderName, double accountBalance);
    virtual ~BankAccount();

    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    void displayAccountInfo() const;
};

#endif // BANKACCOUNT_H
