// CHAPTER 10, QUESTION 16

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void stringToUpper (string&);

int main () {
	string input, str, apen;
	apen = "AY ";									// STRING TO APPEND
	
	cout << "Convert English into \"Pig Latin\" " << endl;
	cout << "===================================" << endl;
	cout << "English: ";
	getline (cin, input);							// GET INPUT WORDS, INCLUDING SPACE
	
	stringToUpper (input);
	
	for (int i=0; i<=input.length(); i++) {
		int count = 0;								// TO STORE THE LENGTH OF A WORD
		char first = input[i];						// INITIALIZE THE FIRST ALPHABET OF A WORD
		char temp = input[i];
		
		while (temp != ' ' && temp != '\0') {		// TO SLICE THE SENTENCE BY CHECKING WHETHER A SPACE IS FOUND
			count++;
			temp = input[i+count];
		}
		
		for (int j=i; j<(i+count-1); j++)			// TO WRITE A STRING WITHOUT THE FIRST LETTER
			str += input[j+1];
		
		str += first;								// ADD THE FIRST LETTER INTO THE STRING
		str += apen;								// ADD THE "AY" INTO THE STRING
		
		i += count;									// GET THE READING HEAD POINT TO THE NEXT STRING
	}
	
	cout << "Pig Latin: " << str <<endl;
	
	return 0;
}

// FUNCTION TO CHANGE STRING INTO UPPERCASE
void stringToUpper (string &s) {
	for (int i=0; i<s.length(); i++)
    	s[i] = toupper(s[i]);
}

