// CHAPTER 10 - QUESTION 7

#include <iostream>
#include <cctype>
#include <cstring>
#include <iomanip>

using namespace std;

#define SIZE 100
#define PART 4

void nameSlice (char [], char[], int);

int main () {
	char input[SIZE];
	char nameFirst[SIZE];
	char nameMiddle[SIZE];
	char nameLast[SIZE];
	char nameNew[SIZE];
	nameNew[0] = '\0';
	
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<setw(40)<<"Question 7"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl<<endl;
	
	cout << "Name Arranger " << endl;
	cout << "==============" << endl;
	cout << "Enter your first, middle and last name, separated by a space: " << endl;
	cin.getline (input, SIZE);
	
	nameSlice (nameFirst, input, 0);		// GET THE FIRST NAME
	nameSlice (nameMiddle, input, 1);		// GET THE MIDDLE NAME
	nameSlice (nameLast, input, 2);			// GET THE LAST NAME
	
	// COMBINE THE NAME ACCORDING TO "LAST, FIRST MIDDLE"
	strcat (nameNew, nameLast);
	strcat (nameNew, ", ");
	strcat (nameNew, nameFirst);
	strcat (nameNew, " ");
	strcat (nameNew, nameMiddle);
	
	cout << "\nDisplay the fourth array: " << nameNew << endl;
	
	return 0;
}

// FUNCTION TO SLICE THE STRING: 
//	np IS A SLICE OF INPUT STRING
//	n IS THE INPUT STRING
//	p IS THE PART OF NAME: 0(FIRST), 1(MIDDLE), 2(LAST)
void nameSlice (char np[], char n[], int p) {
	int count = 0;
	int i = 0;
	int j = 0;
	
	while (count != p) {						// SEARCH FOR PART p IN THE INPUT STRING
		if (count != p && n[i] == ' ') {		// IF IS NOT PART p AND ALREADY FINISHED READING A WORD IN THE INPUT STRING (WHEN READ A SPACE)
			count++;
		}
			
		i++;
	}
	
	while (n[i] != ' ' && n[i] != '\0') {		// WRITE THE PART OF NAME IN np
		np [j] = n[i];
		i++;
		j++;
	}
	
	np[j] = '\0';
}

