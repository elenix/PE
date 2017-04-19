// CHAPTER 10, QUESTION 14

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <sstream>
#include <string>


using namespace std;

int main () {
	string input, s, str; 
	
	cout << "Word Separator " << endl;
	cout << "===============" << endl;
	cout << "Enter a sentence of words that are run together with the first character of " << endl;
	cout << "each word is uppercase: " << endl;
	cin >> input;
	
	for (int i=0; i<input.length(); i++) {
		char temp = input[i];
		
		if (i != 0 && isupper (temp)) {		// IF UPPERCASE IS DETECTED, SPACE IT AND CHANGE TO LOWER CASE
			str.append (" ");
			temp = tolower (temp);
		}
		
		if (i == 0 && islower (temp))		// CHANGE THE FIRST LETTER INTO UPPERCASE
			temp = toupper (temp);
		
		// CONVERT CHAR INTO STRING.
		stringstream ss;
		ss << temp;
		ss >> s;
			
		str.append (s);
	}
	
	cout << "\nOutput: " << str << endl;
	
	return 0;
}

