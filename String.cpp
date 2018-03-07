#include <iostream>
#include "Functions.h"
#include <string>

using namespace std;

int main()
{
	string a;
	string b;

	cout << "Please enter first word: " << endl;
	cin >> a;
	cout << "Please enter second word: " << endl;
	cin >> b;

	int x = a.length();
	int y = b.length();
	int difference;
	int less;

	difference = x - y;
	less = y - x;

	if (x > y)
	{
		cout << "First word " << a << " is longer than second word " << b << " by " << difference << " characters.";
	}
	
	else if (x < y)
	{
		cout << "First word " << a << " is longer than second word " << b << endl;
		cout << less << " is the length difference." << endl;
	}

	else if (x == y)
	{ 
		cout << "First word \"" + a + "\" has same length as second word \"" + b + "\"." << endl;
	}
	


	/*string name;
	cout << "Who are you?" << endl;
	cin >> name;
	string greeting = "Hello " + name;
		if (name == "Nate")
		{
			greeting += ", I know you!";
		}

	cout << greeting << endl;

	int l = greeting.length();
	cout << "\"" + greeting + "\" is " << l << " characters long." << endl;
	auto space = greeting.find(' ');
	string beginning = greeting.substr(space + 1);
	cout << beginning << endl;
	if (beginning == name)
	{
		cout << "expected result." << endl;
	}*/



	

	//below are Guess Game code

	/*int guess;
	int answer =7;
	bool keepgoing = true;
	int goahead;
	
	

	while (keepgoing)
	{
		cout << add(2.3, 3.4) << endl;
		cout << isopen(false) << endl;
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
		
		
	}*/

	return 0;
	
}