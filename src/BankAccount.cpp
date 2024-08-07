#include "BankAccount.h"

BankAccount::BankAccount(std::string n, double b, std::string h) :
	accountNumber(n),
	money(b),
	accountHolder(h)
{}

void BankAccount::setDeposit(double amount) 
{
	money += amount;
}

void BankAccount::setWithdraw(double amount)
{
	money -= amount;
}

void BankAccount::setDisplayAccountInfo() const
{
	std::cout << accountHolder << std::endl;
	std::cout << accountNumber << std::endl;
	std::cout << money << std::endl;
}

std::string BankAccount::getAccountHolder() const
{
	return accountHolder;
}
std::string BankAccount::getAccountNumber() const
{
	return accountNumber;
}

double BankAccount::accountBalance() const
{
	return money;
}