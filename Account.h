#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    double balance;
    double interestRate;

public:
    enum AccountType { SAVINGS, CHECKING };
    Account(int accNumber, AccountType type);
    void deposit(double amount);
    void withdraw(double amount);
    double calculateInterest();
    double getBalance();
};

#endif
