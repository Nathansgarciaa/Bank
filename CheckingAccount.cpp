#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance, double overdraftFee)
    : BankAccount(name, balance), overdraftFee(overdraftFee) {
}

void CheckingAccount::withdraw(double amount) {
    BankAccount::withdraw(amount);
    if (accountBalance < 0) {
        accountBalance -= overdraftFee;
    }
}
