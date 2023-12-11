#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(string name, double balance, double fee) : BankAccount(name, balance), overdraftFee(fee) {}

void CheckingAccount::withdraw(double amount) {
    BankAccount::withdraw(amount);
    if (accountBalance < 0) {
        accountBalance -= overdraftFee;
    }
}
