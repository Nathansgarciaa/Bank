#include "Bank.h"
#include <iostream>

void Bank::addAccount(const std::shared_ptr<BankAccount>& account) {
    accounts.push_back(account);
}

void Bank::displayAllAccounts() const {
    for (const auto& account : accounts) {
        account->displayAccountInfo();
    }
}

void Bank::performOperations() {
    // Implementation for perform operations
    // This method could include interaction with the user to choose accounts and perform deposits/withdrawals
}
