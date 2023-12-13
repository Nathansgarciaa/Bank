#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
public:
    // Member variables
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;
    static int lastAccountNumber;

    // Constructors
    BankAccount();
    BankAccount(int accountNumber, string accountHolderName, double accountBalance);
    BankAccount(string accountHolderName, double accountBalance);

    // Member functions
    double getBalance();
    void displayAccountInfo();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // BANKACCOUNT_H
