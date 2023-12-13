#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(string accountHolderName, double accountBalance){
    
    this-> accountHolderName = accountHolderName;
    this-> accountBalance = accountBalance;
   
}
void CheckingAccount::withdraw(double amount) {
    BankAccount::withdraw(amount);
    if (this->accountBalance < 0) {
        this->accountBalance -= overdraftFee; // Apply overdraft fee
    }
}
