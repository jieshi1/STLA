#include <iostream>
#include <cctype>

using namespace std;

char character(char start, int offset) {
	if (isalpha(start) == 0) {
		string invalidc = "invalidCharacterExcpeption.\n";
		throw invalidc;
	}

	int value = (int)start;
	int chreturn = value + offset;

	if (start >= 'A' && start <= 'Z') {
		if (chreturn < 65 || chreturn > 90) {
			string invalidr = "invalidRangeException.\n";
			throw invalidr;
		}
	}
	else if (start >= 'a' && start <= 'z')
	{
		if (chreturn < 97 || chreturn > 122) {
			string invalidr = "invalidRangeException.\n";
			throw invalidr;
		}
	}

	return (char)chreturn;
}

int main()
{

	try
	{
		cout << "character return: " << character('a', 1) << endl;
		
	}
	catch (string invalidr)
	{
		cout << invalidr;
	}

	try
	{
		cout << "throw: " << character('a', -1) << endl;

	}
	catch (string invalidr)
	{
		cout << invalidr;
	}
	try
	{
		cout << "character return: " << character('Z', -1) << endl;

	}
	catch (string invalidr)
	{
		cout << invalidr;
	}
	try
	{
		cout << "throw: " << character('?', 5) << endl;

	}
	catch (string invalidc)
	{
		cout << invalidc;
	}

}

				


		
	

