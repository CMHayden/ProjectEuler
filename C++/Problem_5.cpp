/*
*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
*
*What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

bool isDivisible(int dividend, int divisor) {
	if (dividend % divisor == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool fromOne2Twenty(int testNumber) {
	bool divisible = true;
	for (int i = 1; i < 20; i++) {
		divisible = isDivisible(testNumber, i);
		if (divisible == false) {
			return false;
			break;
		}
	}
	return true;
}


int main()
{
	int testNumber = 1;
	bool gotIt = false;
	while (gotIt == false) {
		gotIt = fromOne2Twenty(testNumber);
		if (gotIt == false) {
			testNumber++;
		}
		else {
			cout << testNumber << endl;
			system("PAUSE");
		}

	}
    return 0;
}

