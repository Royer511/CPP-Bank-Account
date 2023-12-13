#pragma once
class BankAccount
{
	int balance = 0;
public:
	int deposit(int amount);
	int withdraw(int amount);
	int showBalance();
};

