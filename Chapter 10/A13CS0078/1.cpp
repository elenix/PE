// CHAPTER 10 - QUESTION 1

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

#define LENGTH 100

int calcNumOfWords (char*);

int main () {
	char cstr[LENGTH];										// TO STORE INPUT C-STRING.
	char *strPtr = NULL;									// POINTER TO THE C-STRING.
	int numOfWords;											// NUMBER OF WORDS IN THE C-STRING.
	
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<setw(40)<<"Question 1"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl<<endl;
	
	cout << "Word Counter " << endl;
	cout << "=============" << endl;
	cout << "Enter a string: ";
	cin.getline (cstr, LENGTH);								// ALLOW USER TO INPUT C-STRING.
	
	strPtr = cstr;											// ASSIGN POINTER TO POINT TO THE C-STRING.
	
	numOfWords = calcNumOfWords (strPtr);					// FUNCTION CALLED TO CALCULATE THE NUMBER OF WORDS.
	
	cout << "Number of words: " << numOfWords << endl;		// DISPLAY THE NUMBER OF WORDS.
	
	return (0);
}


int calcNumOfWords (char *ptr) {
	int count = 0;					// NUMBER OF WORDS COUNTED.
	int n = 0;
	
	while (ptr[n] != '\0') {
		if(ptr[n] == ' ') 			// IF A SPACE IS FOUND, 
			count++;				// MEANS THAT A WORD IS COUNTED.
		
		n++;
	}
	
	count++;						// THE LAST WORD.
	return count;
}

