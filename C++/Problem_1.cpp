/*
*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
*Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include "stdafx.h"		//The standard header file library for windows console.
#include <iostream>		//The input output console comand library.
using namespace std;

int getMultiples(int multiplesOf, int countMultiples, int number) {
	while (multiplesOf < 1000) {
		countMultiples += multiplesOf;
		multiplesOf += number;
	}
	return countMultiples;
}
int main() {
	int fivess = 0;
	fivess = getMultiples(5, fivess, 5);
	int threess = 0;
	threess = getMultiples(3, threess, 3);
	int fifteenss = 0;
	fifteenss = getMultiples(15, fifteenss, 15);
	cout << threess + fivess - fifteenss << endl;
	system("PAUSE");
	return 0;
}