// Extra Credit: Change Counter
// Josh Valerio

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double dollars;
	int numQuarters;
	int numDimes;
	int numNickels;
	int numPennies;

	cout << "Input number of Quarters: ";
	cin >> numQuarters;
	cout << endl << "Input number of Dimes: ";
	cin >> numDimes;
	cout << endl << "Input number of Nickles: ";
	cin >> numNickels;
	cout << endl << "Input number of Pennies: ";
	cin >> numPennies;

	cout << endl << "You have " << numQuarters << " quarter(s), "
		<< numDimes << " dime(s), " << numNickels << " nickel(s), and " << numPennies << " pennies.";
	//Penny to pennies? I don't know a good way of adding the parentheses to it

	dollars = (numQuarters * 0.25) + (numDimes * 0.10) + (numNickels * .05) + (numPennies * 0.01);
	cout << fixed << setprecision(2) << endl << "In total they are worth $" << dollars << endl;

	system("pause");
	return 0;
}