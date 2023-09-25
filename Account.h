#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNumber);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
};

#endif
