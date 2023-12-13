#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "BankAccount.h"

class SavingsAccount : public BankAccount {
private:
    double interestRate; // Interest rate for the savings account

public:
    // Constructor
    SavingsAccount(string accountHolderName, double accountBalance, double interestRate);

    // Function to add interest based on the interest rate
    void addInterest();
};

#endif // SAVINGSACCOUNT_H
