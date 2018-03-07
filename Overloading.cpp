#include <iostream>

using namespace std;

bool test(bool x)
{
	return x;
}

bool test(double x)
{
	return x > 0;
}

// void means this function returns nothing
void test(int y)
{
	return;
}

int main()
{
	if (test(true))
	{
		cout << "true passes the test" << endl;
	}

	if (test(2.3))
	{
		cout << "2.3 passes the test" << endl;
	}

	return 0;
}
