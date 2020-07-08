//============================================================================
// Name        : 001_Pointers.cpp
// Author      : Serhii Yurskyi
// Version     :
//============================================================================

#include <iostream>
using namespace std;

// Loop through an array using a pointer, with array element reference syntax
// Loop through an array by incrementing a pointer
// Loop through an array, stopping by comparing two pointers

int main() {

	string texts[] = { "one", "two", "three" };

	string *pTexts = texts;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElement = &texts[0];
	string *pEnd = &texts[2];

	while(true) {
		cout << *pElement << " " << flush;

		if(pElement == pEnd) {
			break;
		}

		pElement++;
	}


	return 0;
}
