#include <iostream>
#include "Account.h"

int main() {
    Account acc1(1001, Account::SAVINGS);
    Account acc2(1002, Account::CHECKING);

    int choice;
    double amount;

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Calculate Interest\n";
        std::cout << "4. Check Balance\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter amount to deposit: $";
                std::cin >> amount;
                acc1.deposit(amount);
                break;

            case 2:
                std::cout << "Enter amount to withdraw: $";
                std::cin >> amount;
                acc1.withdraw(amount);
                break;

            case 3:
                std::cout << "Interest on account 1: $" << acc1.calculateInterest() << std::endl;
                break;

            case 4:
                std::cout << "Account 1 balance: $" << acc1.getBalance() << std::endl;
                std::cout << "Account 2 balance: $" << acc2.getBalance() << std::endl;
                break;

            case 5:
                return 0;

            default:
                std::cout << "Invalid choice. Try again." << std::endl;
        }
    }

    return 0;
}
