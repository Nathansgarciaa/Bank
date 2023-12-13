#include "BankAccount.h"
#include <iostream>
#include <stdexcept>

int BankAccount::lastAccountNumber = 0; // Initialize the static member to keep track of the last account number

// Default constructor
BankAccount::BankAccount() {
    this->accountNumber = ++lastAccountNumber; // Increment and assign the next account number
    this->accountHolderName = "John Doe";
    this->accountBalance = 0.00;
}

// Overloaded constructor
BankAccount::BankAccount(string accountHolderName, double accountBalance) {
    this->accountNumber = ++lastAccountNumber; // Increment and assign the next account number
    this->accountHolderName = accountHolderName;
    this->accountBalance = accountBalance;
}

double BankAccount::getBalance(){
    return this->accountBalance;
}

void BankAccount::displayAccountInfo(){
    std::cout << "Account Number: " << this->accountNumber << std::endl;
    std::cout << "Account Holder Name: " << this->accountHolderName << std::endl;
    std::cout << "Account Balance: $" << this->accountBalance << std::endl;
}

void BankAccount::deposit(double amount) {
    if (amount < 0) {
        throw std::invalid_argument("Amount must be positive.");
    }
    this->accountBalance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount < 0) {
        throw std::invalid_argument("Amount must be positive.");
    }
    if (amount > this->accountBalance) {
        throw std::invalid_argument("Insufficient funds.");
    }
    this->accountBalance -= amount;
}