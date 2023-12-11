#include "Bank.h"
#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() {
    Bank bank;
    int choice = 0;

    while (choice != 4) {
        cout << "\nMenu:\n" << endl;
        cout << "1. Add a new account" << endl;
        cout << "2. Display all accounts" << endl;
        cout << "3. Perform operations on accounts" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        string name;
        double balance;

        switch (choice) {
            case 1: {
                cout << "Enter the account holder's name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter the initial account balance: $";
                cin >> balance;
                bank.add_account(make_shared<BankAccount>(name, balance));
                cout << endl;
                break;
            }
            case 2:
                bank.display_all_accounts();
                cout << endl;
                break;
            case 3:
                bank.perform();
                cout << endl;
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
