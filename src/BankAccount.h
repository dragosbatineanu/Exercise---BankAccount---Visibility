#pragma once

#include "Libraries.h"

class BankAccount
{
private:
	std::string accountNumber;
	double money;

protected:
	std::string accountHolder;

public:

	BankAccount(std::string n, double b, std::string h);

	//public methods
	void setDeposit(double amount);
	void setWithdraw(double amount);
	void setDisplayAccountInfo() const;

	//public gettters
	std::string getAccountHolder() const;
	std::string getAccountNumber() const;
	double accountBalance() const;
};

