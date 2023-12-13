#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(string accountHolderName, double accountBalance, double overdraftFee){
    
    this-> accountHolderName = accountHolderName;
    this-> accountBalance = accountBalance;
    this-> overdraftFee = overdraftFee;
}
void CheckingAccount::withdraw(double amount) {
    BankAccount::withdraw(amount);
    if (this->accountBalance < 0) {
        this->accountBalance -= overdraftFee; // Apply overdraft fee
    }
}
