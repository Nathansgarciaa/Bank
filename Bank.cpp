#include "Bank.h"
#include <iostream>

Bank::Bank() {}

Bank::~Bank() {
    for (auto& account : accounts) {
        delete account;
    }
    accounts.clear();
}

void Bank::add_account(BankAccount* account) {
    accounts.push_back(account);
}

void Bank::display_all_accounts() {
    for (auto& account : accounts) {
        account->displayAccountInfo();
    }
}

void Bank::perform() {
    int accountNumber, choice;
    double amount;

    cout << "Enter account number: ";
    cin >> accountNumber;

    if (accountNumber < 0 || accountNumber >= accounts.size()) {
        cout << "Invalid account number." << endl;
        return;
    }

    cout << "1. Deposit\n2. Withdraw\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            accounts[accountNumber]->deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            accounts[accountNumber]->withdraw(amount);
            break;
        default:
            cout << "Invalid choice." << endl;
    }
}
