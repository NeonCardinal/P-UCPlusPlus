#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	int min;
	int max;

	if (a > b)
	{
		min = b;
		max = a;
	}
	else
	{
		min = a;
		max = b;
	}

	cout << "min = " << min << endl;
	cout << "max = " << max << endl;

	return 0;
}