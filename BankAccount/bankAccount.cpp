#include "bankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string& ownerName, double initialBalance, double limitBalance) : ownerName_(ownerName), balance_(NULL)
{
	if (initialBalance < 0 && initialBalance > 0)
	{
		throw std::invalid_argument("They can only be 0");
	}
}

const double BankAccount::LIMIT_AMOUNT_ = 1'000'000;

void BankAccount::deposit(double amount)
{
	if (amount <= 0 || amount > LIMIT_AMOUNT_)
	{
		throw std::invalid_argument("Limit deposit is 1'000'000 Rubles");
	}
	balance_ += amount;
}

void BankAccount::withdraw(double amount)
{
	if (amount > LIMIT_AMOUNT_)
	{
		throw std::invalid_argument("Withsrawing limit 1'000'000 Rubles");
	}
	balance_ -= amount;
}

void BankAccount::transfer(BankAccount& other, double amount)
{
	if (this == &other)
	{
		throw std::invalid_argument("Must not transfer to yourself");
	}
	else if (amount < 0 || amount > LIMIT_AMOUNT_)
	{
		throw std::invalid_argument("Transfers limit 1'000'000 Rubles");
	}
	withdraw(amount);
	other.deposit(amount);
}

void BankAccount::showPerson()
{
	std::cout << "====================" << std::endl;
	std::cout << "Имя:\t" << ownerName_ << std::endl;
	std::cout << "Баланс:\t" << balance_ << std::endl;
	std::cout << "====================" << std::endl;
}

