#include "BankAccount.h"

int BankAccount::deposit(int amount)
{
    balance += amount;
    return balance;
}

int BankAccount::withdraw(int amount)
{
    if (amount <= balance) {
        balance -= amount;
    }
    return balance;
}

int BankAccount::showBalance()
{
    return balance;
}
