#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x;

	cout << "x = ";
	cin >> x;
	if (!cin) 
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	double y;
	
	if (x <= 2)
	{
		y = x;
	}
	else
	{
		if (x <= 3)
		{
			y = 2;
		}
		else
		{
			y = x - 1;
		}
	}

	cout << setprecision(3) << setiosflags(ios::fixed);
	cout << setw(10) << x << setw(10) << y << endl;

	return 0;
}