#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a;
	double b;
	double c;

	cout << "a = ";
	cin >> a;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	cout << "b = ";
	cin >> b;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	cout << "c = ";
	cin >> c;
	if (!cin)
	{
		cout << "Error, bad input" << endl;
		return 1;
	}

	if (b < a)
	{
		double x = a;
		a = b;
		b = x;
	}
	if (c < a)
	{
		double x = a;
		a = c;
		c = x;
	}
	if (c < b)
	{
		double x = c;
		c = b;
		b = x;
	}

	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;

	return 0;
}