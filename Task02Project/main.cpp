#include <iostream>
#include "logic.h"
using namespace std;

int main()
{

	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Fibonacci (" << number << "): " << get_fibo_number(number)
		<< endl;

	return 0;
}