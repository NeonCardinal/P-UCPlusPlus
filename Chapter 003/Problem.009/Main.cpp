#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (n < 0 || n > 9)
	{
		cout << "Bad input!" << endl;
		return 1;
	}

	if (n == 0)
	{
		cout << "zero" << endl;
	}
	else if (n == 1)
	{
		cout << "one" << endl;
	}
	else if (n == 2)
	{
		cout << "two" << endl;
	}
	else if (n == 3)
	{
		cout << "three" << endl;
	}
	else if (n == 4)
	{
		cout << "four" << endl;
	}
	else if (n == 5)
	{
		cout << "five" << endl;
	}
	else if (n == 6)
	{
		cout << "six" << endl;
	}
	else if (n == 7)
	{
		cout << "seven" << endl;
	}
	else if (n == 8)
	{
		cout << "eight" << endl;
	}
	else if (n == 9)
	{
		cout << "nine" << endl;
	}

	return 0;
}