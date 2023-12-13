#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(string accountHolderName, double accountBalance, double interestRate){
    this->accountHolderName = accountHolderName;
    this->accountBalance = accountBalance;
    this ->interestRate = interestRate;
}
void SavingsAccount::addInterest(){
this->accountBalance += this->accountBalance * this->interestRate;
}

