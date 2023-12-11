#include "BankAccount.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount() : accountNumber(0), accountHolderName("Unnamed"), accountBalance(0.0) {
    static int nextAccountNumber = 1;
    accountNumber = nextAccountNumber++;
}

BankAccount::BankAccount(string name, double balance) 
    : accountHolderName(name), accountBalance(balance) {
    static int nextAccountNumber = 1;
    accountNumber = nextAccountNumber++;
}

BankAccount::~BankAccount() {
    // Destructor logic (if needed)
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        accountBalance += amount;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= accountBalance) {
        accountBalance -= amount;
    }
}

void BankAccount::displayAccountInfo() const {
    cout << "Account Number: " << accountNumber << "\nAccount Holder: " << accountHolderName 
         << "\nBalance: $" << accountBalance << endl;
}
