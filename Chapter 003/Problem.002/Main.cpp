#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x;

	cout << "enter three digit positive number: ";
	cin >> x;

	short s;
	short d;
	short e;

	s = x / 100;
	d = x / 10 % 10;
	e = x % 10;

	cout << setw(10) << "stotici" << setw(5) << s << endl;
	cout << setw(10) << "desetici" << setw(5) << d << endl;
	cout << setw(10) << "edinici" << setw(5) << e << endl;

	return 0;
}