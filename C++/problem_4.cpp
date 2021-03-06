/*
*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
*
*Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string reverse(string word) {
	int n = word.length();
	for (int i = 0; i < n / 2; i++) {
		swap(word[i], word[n - i - 1]);
	}
	return word;
}

int getPalindrome() {
	int palindrome = 0;

	for (int x = 999; x >= 100; x--) {
		for (int y = x; y >= 100; y--) {
			if((x*y) > palindrome){
				string pali = to_string(x*y);
				string revPali = reverse(pali);
				if (pali == revPali) {
					palindrome = x * y;
				}
			}
		}
	}
	return(palindrome);
}

void printPalindrome() {
	cout << getPalindrome() << endl;
}

int main()
{
	printPalindrome();
	system("PAUSE");
    return 0;
}

