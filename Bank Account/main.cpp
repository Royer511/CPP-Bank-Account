// Bank Account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankAccount.h"

int main() {
    char operation;
    int amount;
    BankAccount robsAccount;

    do {
        std::cout << "Welcome to your bank account!\n";
        std::cout << "What action would you like to do today?\n";
        std::cout << "Press 1 to show Balance, 2 to Deposit, 3 to Withdraw, or 4 to exit: \n";
        std::cin >> operation;

        switch (operation) {
        case '1':
            std::cout << "Balance: " << robsAccount.showBalance() << std::endl;
            break;
        case '2':
            std::cout << "Enter the amount you would like to deposit: \n";
            std::cin >> amount;
            std::cout << "New Balance: " << robsAccount.deposit(amount) << std::endl;
            break;
        case '3':
            std::cout << "Enter the amount you would like to withdraw: \n";
            std::cin >> amount;
            std::cout << "New Balance: " << robsAccount.withdraw(amount) << std::endl;
            break;
        case '4':
            std::cout << "Exiting." << std::endl;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
        }
    } while (operation != '4');

    return 0;
}