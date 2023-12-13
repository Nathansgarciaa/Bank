#include "BankAccount.h"
#include <iostream>
#include <string>
#include "Bank.cpp"

using namespace std;

int main() {
    Bank bank;
    int choice;

    do {
        std::cout << "1. Add a new account\n";
        std::cout << "2. Display all accounts\n";
        std::cout << "3. Perform operations on accounts\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                bank.add_account();
                break;
            case 2:
                bank.display_all_accounts();
                break;
            case 3:
                bank.perform();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    } while (choice != 4);

    return 0;
}
