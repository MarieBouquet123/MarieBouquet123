#include <iostream>
#include <string>
using namespace std;

void Swap(double& a,double& b,double& c,double& d)
{
	double t = a;
	a = b;
	b = c;
	c = d;
	d = t;
}

/********************************************************************
 * Trace Table List
 ********************************************************************
 * 01. a := 12.0, b := 7.0, c := 32.0, d := 17.0
 * 02. t := 12.0
 * 03. a := 7.0
 * 04. b := 32.0
 * 05. c := 17.0
 * 06. d := 12.0
 *******************************************************************/

int ConsecutiveSum(int n)
{
	int f = n * n - 4;
	return 5 * f + 10;
}

/********************************************************************
 * Trace Table List
 ********************************************************************
 * 01. n := 9
 * 02. f := 77
 * 03. return := 395
 *******************************************************************/

int main()
{
	double a = 12.0, b = 7.0, c = 32.0, d = 17.0;
	cout << "(" << a << "," << b << "," << c << "," << d << ")\n";
	Swap(a,b,c,d);
	cout << "(" << a << "," << b << "," << c << "," << d << ")\n";
	cout << ConsecutiveSum(9) << "\n";

	return 0;
}
