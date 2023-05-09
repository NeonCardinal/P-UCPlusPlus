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

	double p = a * (a + b);
	double s = a * b;

	cout << "p = " << p << endl;
	cout << "s = " << s << endl;

	return 0;
}