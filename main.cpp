#include "Bank.h"
#include <iostream>
#include <string>

int main() {
    Bank bank;
    int choice;

    do {
        cout << "\nMenu:\n1. Add a new account\n2. Display all accounts\n3. Perform operations on accounts\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                double balance;
                int accountType;

                cout << "Enter account holder's name: ";
                cin.ignore();
                getline(cin, name);

                cout << "Enter initial account balance: ";
                cin >> balance;

                cout << "Account Type (1 for Savings, 2 for Checking): ";
                cin >> accountType;

                if (accountType == 1) {
                    double interestRate;
                    cout << "Enter interest rate: ";
                    cin >> interestRate;
                    bank.add_account(new SavingsAccount(name, balance, interestRate));
                } else if (accountType == 2) {
                    double fee;
                    cout << "Enter overdraft fee: ";
                    cin >> fee;
                    bank.add_account(new CheckingAccount(name, balance, fee));
                } else {
                    cout << "Invalid account type." << endl;
                }
                break;
            }
            case 2:
                bank.display_all_accounts();
                break;
            case 3:
                bank.perform();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
