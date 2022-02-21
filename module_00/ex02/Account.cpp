#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return Account::_nbAccounts; }
int Account::getTotalAmount(void) { return Account::_totalAmount; }
int Account::getNbDeposits(void) { return Account::_totalNbDeposits; }
int Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }

Account::Account(void) {}

Account::Account(int initial_deposit)
{
    this->_accountIndex = getNbAccounts();
    this->_amount = initial_deposit;
    Account::_totalAmount += this->_amount;
    Account::_nbAccounts += 1;
    
    _displayTimestamp();
    std::cout << " "
        << "index:" << this->_accountIndex << ";"
        << "amount:" << this->_amount << ";"
        << "created"
        << std::endl;
}

Account::~Account()
{
    Account::_totalAmount -= this->_amount;
    Account::_nbAccounts -= 1;

    _displayTimestamp();
    std::cout << " "
        << "index:" << this->_accountIndex << ";"
        << "amount:" << this->_amount << ";"
        << "closed"
        << std::endl;    
}

int Account::checkAmount(void) const { return this->_amount; }

void Account::makeDeposit(int deposit)
{
    this->_nbDeposits += 1;
    Account::_totalNbDeposits += 1;

    _displayTimestamp();
    std::cout << " "
        << "index:" << this->_accountIndex << ";"
        << "p_amount:" << checkAmount() << ";";
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    std::cout 
        << "deposit:" << deposit << ";"
        << "amount:" << checkAmount() << ";"
        << "nb_deposits:" << this->_nbDeposits
        << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    int p_amount = checkAmount();
    
    _displayTimestamp();
    std::cout << " "
        << "index:" << this->_accountIndex << ";"
        << "p_amount:" << p_amount << ";";
    if (p_amount - withdrawal < 0)
    {
       std::cout << "withdrawal:refused" << std::endl;
       return false;
    }
    else
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals += 1;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
    
        std::cout 
            << "withdrawal:" << withdrawal << ";"
            << "amount:" << checkAmount() << ";"
            << "nb_withdrawals:" << this->_nbWithdrawals
            << std::endl;
        return true;             
    }
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " "
        << "index:" << this->_accountIndex << ";"
        << "amount:" << this->_amount << ";"
        << "deposits:" << this->_nbDeposits << ";"
        << "withdrawals:" << this->_nbWithdrawals
        << std::endl;    
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " "
        << "accounts:" << getNbAccounts() << ";"
        << "total:" << getTotalAmount() << ";"
        << "deposits:" << getNbDeposits() << ";"
        << "withdrawals:" << getNbWithdrawals()
        << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t timer = time(NULL);
    struct tm* tm = localtime(&timer);

    std::cout << "["
        << tm->tm_year + 1900;
    if (tm->tm_mon + 1 < 10)
        std::cout << "0" << tm->tm_mon + 1;
    else
        std::cout << tm->tm_mon + 1;
    std::cout 
        << tm->tm_mday
        << "_"
        << tm->tm_hour
        << tm->tm_min
        << tm->tm_sec
        << "]";
}