/*
Philip Fernandez
Lab03 Question 01
9/1/16
*/

#include <iostream>
using namespace std;

int main()
{
	int number = 371,
		digit1, 
		digit2,
		digit3;

	// Divide by 100 to extract digit in 100's place
	digit1 = number / 100;
	// Mod by 100 to reduce number to last 2 digits
	number %= 100;
	// Divide by 10 to extract digit in 10's place
	digit2 = number / 10;
	// Mod by 10 to reduce number to digit in 1's place 
	digit3 = number % 10;
	
	// Display resulting digits to std::out
	cout << "Digit 1: " << digit1 << "\n";
	cout << "Digit 2: " << digit2 << "\n";
	cout << "Digit 3: " << digit3 << "\n";
	return 0;
}