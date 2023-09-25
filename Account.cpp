#include "Account.h"

Account::Account(int accNumber) : accountNumber(accNumber), balance(0) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount)
        balance -= amount;
}

double Account::getBalance() {
    return balance;
}
