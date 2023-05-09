#include <iostream>

using namespace std;

const double PI = 3.1415926535898;

int main()
{
	double r;

	cout << "r = ";
	cin >> r;

	double p = 2 * PI * r;
	double s = PI * r * r;

	cout << "Perimeter = " << p << endl;
	cout << "Area = " << s << endl;

	return 0;
}