#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(string accountHolderName, double accountBalance){
    this->accountHolderName = accountHolderName;
    this->accountBalance = accountBalance;
    
}
void SavingsAccount::addInterest(){
this->accountBalance += this->accountBalance * this->interestRate;
}

