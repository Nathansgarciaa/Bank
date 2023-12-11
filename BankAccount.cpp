#include "BankAccount.h"
#include <iostream>

int BankAccount::nextAccountNumber = 1;

BankAccount::BankAccount() : accountNumber(nextAccountNumber++), accountHolderName("John Doe"), accountBalance(0.00) {}

BankAccount::BankAccount(string name, double balance) : accountNumber(nextAccountNumber++), accountHolderName(name), accountBalance(balance) {}

BankAccount::~BankAccount() {}

double BankAccount::getBalance() {
    return accountBalance;
}

void BankAccount::displayAccountInfo() {
    cout << "Account Number: " << accountNumber << "\nAccount Holder: " << accountHolderName << "\nAccount Balance: $" << accountBalance << endl;
}

void BankAccount::deposit(double amount) {
    accountBalance += amount;
}

void BankAccount::withdraw(double amount) {
    accountBalance -= amount;
}
