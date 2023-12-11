#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(string name, double balance, double rate) : BankAccount(name, balance), interestRate(rate) {}

void SavingsAccount::addInterest() {
    accountBalance += accountBalance * interestRate / 100;
}
