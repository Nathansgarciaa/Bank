#include <iostream>
#include <vector>
#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

class Bank {
    std::vector<BankAccount*> accounts;

public:
    void add_account() {
        std::string name;
        double balance;
        int type;
        std::cout << "Enter account holder's name: ";
        std::cin >> name;
        std::cout << "Enter initial balance: ";
        std::cin >> balance;
        std::cout << "Account type (1 for Checking, 2 for Savings): ";
        std::cin >> type;

        if (type == 1) {
            accounts.push_back(new CheckingAccount(name, balance));
        } else {
            accounts.push_back(new SavingsAccount(name, balance));
        }
    }

    void display_all_accounts() {
        for (std::vector<BankAccount*>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
            (*it)->displayAccountInfo();
        }
    }

    void perform() {
        int accountNumber;
        std::cout << "Enter account number: ";
        std::cin >> accountNumber;

        if (accountNumber < 0 || static_cast<size_t>(accountNumber) >= accounts.size()) {
            std::cout << "Invalid account number!" << std::endl;
            return;
        }

        int choice;
        std::cout << "1. Deposit\n2. Withdraw\nEnter choice: ";
        std::cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                accounts[accountNumber]->deposit(amount);
                break;
            case 2:
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                accounts[accountNumber]->withdraw(amount);
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    }

    ~Bank() {
        for (std::vector<BankAccount*>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
            delete *it;
        }
        accounts.clear();
    }
};
