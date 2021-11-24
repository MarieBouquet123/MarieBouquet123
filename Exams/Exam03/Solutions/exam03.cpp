#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/**************************************************************************************************
 * Fundamentals
 **************************************************************************************************
 * a.
 * 	double M(double a,double b,double c,double d)
 * 	{
 * 		return (a + b + c + d) / 4.0;
 * 	}
 * b.
 * 	bool results[3] = {false,true,true};
 * c.
 * 	double a = new double[512];
 * d.
 * 	for(int i = 0;i < 20;i += 1)
 * 	{
 * 		t[i] = 0;
 * 	}
 * e.
 * 	bool S(double a,double b,double& c)
 * 	{
 * 		if(a < b)
 * 		{
 * 			c = a;
 * 			return true;
 * 		}
 * 		else
 * 		{
 * 			c = b;
 * 			return false;
 * 		}
 * 	}
 *************************************************************************************************/

/**************************************************************************************************
 * Problem Solving solution should be written between below this comment and 
 * before the main function
 **************************************************************************************************/ 
double SequenceData(double data[],int n)
{
	double m = data[0];

	for(int i = 1;i < n;i += 1)
	{
		if(m > data[i])
		{
			m = data[i];
		}
		data[i] += data[i-1];
	}
	return m;
}

int main()
{
	double data[6] = {2,6,5,1,8,3};
	std::cout << SequenceData(data,6) << "\n{";

	for(int i = 0;i < 6;i += 1)
	{
		std::cout << data[i];

		if(i + 1 < 6)
		{
			std::cout << ",";
		}
	}
	std::cout << "}\n";
	return 0;
}


/**************************************************************************************************
 * Tracing
 **************************************************************************************************
 * let A := str[i] '\0', B := isalpha(str[i]) 
 * 01. str := "m0V3S"
 * 02. a := ""
 * 03. b := ""
 * 04. i := 0
 * 05. A := true
 * 06. B := true
 * 07. a := "m"
 * 08. i := 1
 * 09. A := true
 * 10. B := false
 * 11. b := "0"
 * 12. i := 2
 * 13. A := true
 * 14. B := true
 * 15. a := "mv"
 * 16. i := 3
 * 17. A := true
 * 18. B := false
 * 19. b := "03"
 * 20. i := 4
 * 21. A := true
 * 22. B := true
 * 23. a := "mvs"
 * 24. i := 5
 * 25. A := false
 * 26. return := "mvs03" 
 *************************************************************************************************/


/**************************************************************************************************
 * Debugging
 **************************************************************************************************
 * a. 
 *	01. void I(int a[],int n)
 *	03. for(int i = 0;i < n;i += 1)
 *	07. }
 * b.
 * 	05. return "negative";
 * 	09. return "positive";
 * 	11. else
 * 	13. return "zero";
 * c.
 * 	05. for(int i = 0;i < x;i += 1)
 * 	07. cin >> t;
 * d.
 * 	03. bool A = (a != b && a != c && b != c);
 *************************************************************************************************/

