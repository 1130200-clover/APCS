//============================================================================
// Name        : apcs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : tree in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "--  正直角三角形 --\n";
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
	    cout << "\n";
	}

	cout << "--  反直角三角形 --\n";
	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	cout << "--  聖誕樹 --\n";
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5 - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
