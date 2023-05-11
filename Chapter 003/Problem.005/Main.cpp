#include <iostream>

using namespace std;

int main()
{
	double a;
	double b;
	double c;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	double min = a;

	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}

	cout << min << endl;

	return 0;
}