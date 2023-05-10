#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x;

	cout << "x = ";
	cin >> x;

	bool b = x < ceil(x);

	cout << "x = ";
	cin >> x;

	b = b && (x < floor(x));

	cout << "b = " << b << endl;

	return 0;
}