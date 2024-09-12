/*
* Name: Maxwell Brohm
* Program Name: Make a Calculator
* Date: 9/12/24
* Extra: squares both numbers
*/

#include <iostream>
using namespace std;
int main() {
	// create all the variables
	float num1, num2, add, sub, mult, div, mod, inc, inc1, dec, dec1, sqr, sqr1;
	// asks for user input
	cout << "Enter the first number: ";
	// sets the variable value to user response
	cin >> num1;
	// asks for user input
	cout << "Enter the second number: ";
	// sets the variable value to user response
	cin >> num2;
	// does all the calculations necessary
	add = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	mod = int(num1) % int(num2);
	inc = ++num1;
	inc1 = ++num2;
	dec = num1 -= 2;
	dec1 = num2 -= 2;
	sqr = ++num1 * num1;
	sqr1 = ++num2 * num2;
	// prints out the calculations based on the user input
	cout << "Addition: " << add << endl;
	cout << "Subtraction: " << sub << endl;
	cout << "Multiplication: " << mult << endl;
	cout << "Division: " << div << endl;
	cout << "Modulus: " << mod << endl;
	cout << "Increment number 1: " << inc << "  Increment number 2: " << inc1 << endl;
	cout << "Decrement number 1: " << dec << "  Decrement number 2: " << dec1 << endl;
	cout << "Squared number 1: " << sqr << "  Squared number 2: " << sqr1 << endl; // extra
}