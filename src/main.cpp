#include "Libraries.h"
#include "BankAccount.h"

int main()
{
	std::string name;
	std::string id;
	double balance;
	double transaction;


	std::cout << "Enter the name of the account holder: " << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter the id of the account holder: " << std::endl;
	std::getline(std::cin, id);
	std::cout << "Enter the balance of the account holder: " << std::endl;
	std::cin >> balance;

	BankAccount* Account = new BankAccount(name, balance, id);

	std::cout << "Deposit money: " << std::endl;
	std::cin >> transaction;
	Account->setDeposit(transaction);

	std::cout << "Withddraw money: " << std::endl;
	std::cin >> transaction;
	Account->setWithdraw(transaction);

	std::cout << "Account details: " << std::endl;
	Account->setDisplayAccountInfo();
}