#include <iostream>

using namespace std;

int main()
{
	double a;
	double b;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	double x = a;
	a = b;
	b = x;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}