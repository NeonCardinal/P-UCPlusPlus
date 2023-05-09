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

	cout << "Before swapping: " << "a = " << a << ", b = " << b << endl;

	int temp = a;
	a = b;
	b = temp;

	cout << "After swapping: " << "a = " << a << ", b = " << b << endl;

	return 0;
}