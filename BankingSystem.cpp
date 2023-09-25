#include <iostream>
#include "Account.h"

int main() {
    // Sample usage of the banking system
    Account acc1(1001); // Create account with account number 1001
    acc1.deposit(500); // Deposit $500
    acc1.withdraw(200); // Withdraw $200

    std::cout << "Account 1 balance: $" << acc1.getBalance() << std::endl;

    Account acc2(1002); // Create another account with account number 1002
    acc2.deposit(1000); // Deposit $1000

    std::cout << "Account 2 balance: $" << acc2.getBalance() << std::endl;

    return 0;
}
