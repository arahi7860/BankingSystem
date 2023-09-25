#include "Account.h"
#include <iostream>

Account::Account(int accNumber, AccountType type) : accountNumber(accNumber), balance(0) {
    // Set interest rate based on account type
    if (type == SAVINGS)
        interestRate = 0.02; // 2% interest for savings
    else
        interestRate = 0.01; // 1% interest for checking
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount)
        balance -= amount;
    else
        std::cout << "Insufficient funds for the withdrawal." << std::endl;
}

double Account::calculateInterest() {
    return balance * interestRate;
}

double Account::getBalance() {
    return balance;
}
