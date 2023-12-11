#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

class CheckingAccount : public BankAccount {
private:
    double overdraftFee;

public:
    CheckingAccount(string name, double balance, double fee);
    void withdraw(double amount) override;
};

#endif // CHECKINGACCOUNT_H
