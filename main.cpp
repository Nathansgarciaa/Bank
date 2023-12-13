#include "BankAccount.h"
#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

int main() {
    string holderName;
    double initialBalance;
    int option;

    cout << "Enter account holder's name: ";
    getline(cin, holderName);
    cout << "Enter initial account balance: ";
    cin >> initialBalance;

    BankAccount account(holderName, initialBalance); // Added a semicolon here

    do {
        cout << "\nMenu:\n"
             << "1. Display account information\n"
             << "2. Deposit funds\n"
             << "3. Withdraw funds\n"
             << "4. Exit\n"
             << "Select an option: ";
        cin >> option;

        try {
            if (option == 1) {
                account.displayAccountInfo();
            } else if (option == 2) {
                double depositAmount;
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                account.deposit(depositAmount);
                cout << "Deposited successfully.\n";
            } else if (option == 3) {
                double withdrawalAmount;
                cout << "Enter withdrawal amount: ";
                cin >> withdrawalAmount;
                account.withdraw(withdrawalAmount);
                cout << "Withdrawn successfully.\n";
            } else if (option == 4) {
                cout << "Exiting.\n";
            } else {
                cout << "Invalid option. Please try again.\n";
            }
        } catch (const invalid_argument &e) {
            cerr << "Error: " << e.what() << endl;
        }

        // Clear the input buffer to handle next input correctly
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (option != 4);

    return 0;
}
