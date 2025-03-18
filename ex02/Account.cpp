#include "Account.hpp"

Account::Account(int initial_deposit)
{
	(void) initial_deposit;
	std::cout << "constructor" << std::endl;
}

int Account::getNbAccounts()
{
	std::cout << "getNbAccounts" << std::endl;
	return (0);
}

int Account::getTotalAmount()
{
	std::cout << "getTotalAmount" << std::endl;
	return (0);
}

int Account::getNbDeposits()
{
	std::cout << "getNbDeposits" << std::endl;
	return (0);
}

int Account::getNbWithdrawals()
{
	std::cout << "getNbWithdrawals" << std::endl;
	return (0);
}

void Account::displayAccountsInfos()
{
	std::cout << "displayAccountsInfos" << std::endl;
}
void Account::makeDeposit(int deposit)
{
	(void) deposit;
	std::cout << "makeDeposit" << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	(void) withdrawal;
	std::cout << "makeWithdrawal" << std::endl;
	return (true);
}

int Account::checkAmount() const
{
	std::cout << "checkAmount" << std::endl;
	return (true);
}

void Account::displayStatus() const
{
	std::cout << "displayStatus" << std::endl;
}

void Account::_displayTimestamp()
{
	std::cout << "_displayTimestamp" << std::endl;
}

Account::~Account()
{
	std::cout << "Deconstructor" << std::endl;
}