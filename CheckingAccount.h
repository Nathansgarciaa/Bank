#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"

class CheckingAccount : public BankAccount {
private:
    double overdraftFee;

public:
    CheckingAccount(std::string accountHolderName, double accountBalance, double overdraftFee);
    void CheckingAccount::withdraw(double amount) override;
};

#endif // CHECKINGACCOUNT_H
