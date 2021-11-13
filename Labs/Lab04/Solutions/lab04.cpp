#include <iostream>
#include <string>
using namespace std;

string MonthName(int n)
{
	if(n == 1)
	{
		return "January";
	}
	else if(n == 2)
	{
		return "February";
	}
	else if(n == 3)
	{
		return "March";
	}
	else if(n == 4)
	{
		return "April";
	}
	else if(n == 5)
	{
		return "May";
	}
	else if(n == 6)
	{
		return "June";
	}
	else if(n == 7)
	{
		return "July";
	}
	else if(n == 8)
	{
		return "August";
	}
	else if(n == 9)
	{
		return "September";
	}
	else if(n == 10)
	{
		return "October";
	}
	else if(n == 11)
	{
		return "November";
	}
	else if(n == 12)
	{
		return "December";
	}
	return "";
}

bool ValidDate(int m,int d)
{
	if(m >= 1 && m <= 12)
	{
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			return (d >= 1 && d <= 31);
		}
		else if(m == 2)
		{
			return (d >= 1 && d <= 29);
		}
		else
		{
			return (d >= 1 && d <= 30);
		}
	}
	return false;
}

void RetrieveDate(int& m,int& d)
{
	while(true)
	{
		cout << "Enter a month (numerical): ";
		cin >> m;
		cout << "Enter a day: ";
		cin >> d;

		if(ValidDate(m,d)) 
		{
			break;
		}
	}
}

string WeekDayName(int m,int d)
{
	int f = 4, dp = 0, wd;

	for(int i = 1;i < m;i += 1)
	{
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			dp += 31;
		}
		else if(i == 2)
		{
			dp += 29;
		}
		else
		{
			dp += 30;
		}
	}
	dp += (d - 1);
	wd = (f + dp) % 7;

	if(wd == 0)
	{
		return "Sunday";
	}
	else if(wd == 1)
	{
		return "Monday";
	}
	else if(wd == 2)
	{
		return "Tuesday";
	}
	else if(wd == 3)
	{
		return "Wednesday";
	}
	else if(wd == 4)
	{
		return "Thursday";
	}
	else if(wd == 5)
	{
		return "Friday";
	}
	return "Saturday";
}

void DisplayDate()
{
	int m, d;

	RetrieveDate(m,d);
	cout << WeekDayName(m,d) << ", " << MonthName(m) << " " << d << ", 2004\n";
}

int main()
{
	//Remove multi-comment operator after function is defined
	DisplayDate();
	return 0;
}
