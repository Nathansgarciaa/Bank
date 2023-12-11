#ifndef BANK_H
#define BANK_H

#include <vector>
#include <memory>
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

class Bank {
private:
    std::vector<std::shared_ptr<BankAccount>> accounts;

public:
    void addAccount(const std::shared_ptr<BankAccount>& account);
    void displayAllAccounts() const;
    void performOperations();
};

#endif // BANK_H
