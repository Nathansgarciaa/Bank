#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

class CheckingAccount : public BankAccount {
private:
    double overdraftFee; // Fee charged for overdraft

public:
    // Constructor
    CheckingAccount(string accountHolderName, double accountBalance, double overdraftFee);

    // Overridden withdraw function
    void withdraw(double amount);
};

#endif // CHECKINGACCOUNT_H
