#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(std::string accountHolderName, double accountBalance, double interestRate);
    void addInterest();
};

#endif // SAVINGSACCOUNT_H
