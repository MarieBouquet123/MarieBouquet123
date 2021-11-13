#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, adjective, noun, pronoun, bodypart;
	int num;
	
	cout << "Enter a name: ";
	getline(cin,name);

	cout << "Enter an adjective: ";
	getline(cin,adjective);

	cout << "Enter a noun: ";
	getline(cin,noun);

	cout << "Enter a pronoun: ";
	getline(cin,pronoun);

	cout << "Enter a part of the body: ";
	getline(cin,bodypart);

	cout << "Enter a positive number: ";
	cin >> num;

	cout << "\nPlease excuse " << name << ",\n";
	cout << "who is far too " << adjective << " to attend " << noun << " class. ";
	cout << "Furthermore, " << pronoun << " is sick\nwith the " << bodypart << " flu. ";
	cout << "It will take " << num << " days for " << name << " to recover.\n";

	return 0;
}

/******************************************************************************
 * 01. output := out
 * 02. name := "Alex Jane"
 * 03. output := out 
 * 04. adjective := "anxious"
 * 05. output := out
 * 06. noun := "chemistry"
 * 07. output := out
 * 08. pronoun := "she"
 * 09. output := out
 * 10. bodypart := "eye"
 * 11. output := out
 * 12. num := 12
 * 13. output := out
 * 14. output := out
 * 15. output := out
 * 16. output := out
 * 17. return := 0
 *
 * out
 * ----------------------------------------------------------------------------
 * Enter a name:
 * Enter an adjective:
 * Enter a noun:
 * Enter a pronoun:
 * Enter a part of the body:
 * Enter a positive number:
 *
 * Please excuse Alex Jane,
 * who is far too anxious to attend chemistry class. Furthermore, she is sick
 * with the eye flu. It will take 12 days for Alex Jane to recover.
 * ***************************************************************************/
