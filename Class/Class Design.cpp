#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account a1;
	a1.Deposit(90);
	cout << "After depoisting $90" << endl;
	for (auto s : a1.Report())
	{
		cout << s << endl;
	}
	a1.withdraw(50);
	if (a1.withdraw(100))
	{
		cout << "second withdraw succeeds" << endl;

	}
	cout << "After withdrwaing $50 then $100" << endl;
	for (auto s : a1.Report())
	{
		cout << s << endl;
	}

	return 0;
}

