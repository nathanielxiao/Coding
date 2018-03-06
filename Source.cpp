#include <iostream>
using namespace std;

int main()
{
	int guess;
	int answer =7;
	bool keepgoing = true;
	int goahead;
	
	

	while (keepgoing)
	{
		cout << "Guess a number:";
		cin >> guess;

		if (guess < answer)
		{
			cout << "The first number " << guess << " is less than second number " << answer;
			cout << endl << endl;
			cout << "Another Guess? Press 1 for stop and press 0 for continue:";
			cin >> goahead;

			if (goahead == 1)
			{
				keepgoing = false;
			}
			else if (goahead == 0)
			{
				keepgoing = true;
			}
			else
			{
				cout << "You input an invald value, program closed!!";
				keepgoing = false;
			}
		}
		
		else if (guess>answer)
		{
			cout << "The first number " << guess << " is greater than second number " << answer;
			cout << endl << endl;
			cout << "Another Guess? Press 1 for stop and press 0 for continue:";
			cin >> goahead;

			if (goahead == 1)
			{
				keepgoing = false;
			}
			else if (goahead == 0)
			{
				keepgoing = true;
			}
			else
			{
				cout << "You input an invald value, program closed!!";
				keepgoing = false;
			}
		}
		
		
		else if (guess == answer)
		{
			cout << "The first number " << guess << " is less than second number " << answer << endl;
			cout << "You win!!!!";
			keepgoing = false;
		}
		
		
	}

	return 0;
	
}