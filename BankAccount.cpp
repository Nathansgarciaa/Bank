#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    static int nextAccountNumber;
    int accountNumber;
    string accountHolderName;
    double accountBalance;

public:
    BankAccount();
    BankAccount(string accountHolderName, double accountBalance);
    ~BankAccount();  // Destructor
    double getBalance();
    void displayAccountInfo();
    void deposit(double amount);
    void withdraw(double amount);

};

// Initialize static member
int BankAccount::nextAccountNumber = 1000;

// Default constructor
BankAccount::BankAccount(){
    accountNumber = nextAccountNumber++;
    accountHolderName = "John Doe";
    accountBalance = 0.00;
}

// Overloaded constructor
BankAccount::BankAccount(string name, double balance){
    accountNumber = nextAccountNumber++;
    accountHolderName = name;
    accountBalance = balance;
}

// Destructor
BankAccount::~BankAccount(){
    // You can add cleanup code here if needed
}

double BankAccount::getBalance(){
    return accountBalance;
}

void BankAccount::displayAccountInfo(){
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder's Name: " << accountHolderName << endl;
    cout << "Account Balance: $" << accountBalance << endl;
}

void BankAccount::deposit(double amount){
    if(amount > 0){
        accountBalance += amount;
        cout << "Deposit successful. Current Balance: $" << accountBalance << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}

void BankAccount::withdraw(double amount){
    if(amount > 0 && amount <= accountBalance){
        accountBalance -= amount;
        cout << "Withdrawal successful. Current Balance: $" << accountBalance << endl;
    } else {
        cout << "Invalid withdrawal amount or insufficient funds." << endl;
    }
}

int main() {
    string name;
    double balance;

    // Prompt user for account information
    cout << "Enter the account holder's name: ";
    getline(cin, name);

    cout << "Enter the initial account balance: $";
    cin >> balance;

    // Create a BankAccount instance with user input
    BankAccount userAccount(name, balance);

    int choice;
    double amount;

    // Menu
    do {
        cout << "\nMenu:\n";
        cout << "1. Display account information\n";
        cout << "2. Deposit funds\n";
        cout << "3. Withdraw funds\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                userAccount.displayAccountInfo();
                break;
            case 2:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                userAccount.deposit(amount);
                break;
            case 3:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                userAccount.withdraw(amount);
                break;
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 4);

    return 0;
}
