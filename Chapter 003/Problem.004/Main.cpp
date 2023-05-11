#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Vuvedete chetiri chifreno positivno chislo." << endl;
	cout << "n = ";
	cin >> n;

	short h, s, d, e;

	h = n / 100;
	s = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;

	bool b = (h != s) && (h != d) && (h != e) && (s != d) && (s != e) && (d != e);

	cout << b << endl;

	return 0;
}