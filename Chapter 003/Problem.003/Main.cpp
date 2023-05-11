#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x;

	cout << "Vuvedete realno chislo > 0: ";
	cin >> x;

	int i = floor(x * 10);
	int b = i % 10;

	cout << x << endl;
	cout << b << endl;

	return 0;
}