#include <iostream>
#include "logic.h"
using namespace std;

int main()
{
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Factorial of this number = " << get_factorial(number) << endl;

	return 0;
}