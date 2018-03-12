#include "Account.h"

using namespace std;

Account::Account(void) :balance(0)  //contructor, void means nothing
{
}


vector<string> Account::Report()
{
	vector<string> report;
	report.push_back("Balance is " + to_string(balance));  //to_string is function to conver int to string
	report.push_back("Transactions: ");
	for (auto t : log)
	{
		report.push_back(t.Report());
	}
	report.push_back("----------------");

	return report;
}

bool Account::withdraw(int amt)
{
		if (amt >= 0)
		{
			if (balance >= amt)
			{
				balance -= amt;
				log.push_back(Transaction(amt, " Withdrawed"));
				return true;
			}

			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
}


bool Account::Deposit(int amt)
{
	if (amt >= 0)
	{
		balance += amt;
		log.push_back(Transaction(amt, " Deposited"));
		return true;
	}
	else
	{
		return false;
	}
}

int Account::GetBalance()
{
	return balance;
}

