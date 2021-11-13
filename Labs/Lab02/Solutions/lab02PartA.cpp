#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	double b, c, d;
	bool r;
	
	cout << boolalpha;
	cout << "Enter an integer: ";
	cin >> a;

	r = (-999 <= a && a <= -100 && a % 2 != 0);

	cout << "\nResult: " << r << "\n\n";

	cout << "Enter the first number: ";
	cin >> b;
	cout << "Enter the second number: ";
	cin >> c;
	cout << "Enter the third number: ";
	cin >> d;	

	r = (a * b * c != 0 && (a * b < 0 || a * c < 0 || b * c < 0));

	cout << "\nResult: " << r << "\n";
	return 0;
}
