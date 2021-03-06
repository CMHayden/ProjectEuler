/*The sum of the squares of the first ten natural numbers is,
*
*12 + 22 + ... + 102 = 385
*The square of the sum of the first ten natural numbers is,
*
*(1 + 2 + ... + 10)2 = 552 = 3025
*Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
*
*Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int squareOfSum() {
	int squareOfSum = 0;
	for (int i = 0; i <= 100; i++) {
		squareOfSum += i;
	}
	squareOfSum = squareOfSum * squareOfSum;
	return squareOfSum;
}

int sumOfSquare() {
	int sumOfSquare = 0;
	for (int i = 0; i <= 100; i++) {
		sumOfSquare += i*i;
	}
	return sumOfSquare;
}

void displayDifference() {
	int sumSquare = sumOfSquare();
	int squareSum = squareOfSum();
	cout << squareSum - sumSquare << endl;
	system("PAUSE");
}

int main()
{
	displayDifference();
    return 0;
}

