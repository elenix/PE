// CHAPTER 10, QUESTION 13

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int dateSlice (string, int);
string getMonthText (int);

int main () {
	string date, month;
	int m, day, year;
	
	cout << "Date Separator " << endl;
	cout << "===============" << endl;
	cout << "Please enter a date in the form mm/dd/yyyy: ";
	cin >> date;
	
	m = dateSlice (date, 0);													// GET THE MONTH NUMBER
	day = dateSlice (date, 1);													// GET THE DAY NUMBER
	year = dateSlice (date, 2);													// GET THE YEAR NUMBER
	
	month = getMonthText (m);													// GET MONTH TEXT
	
	cout << "\nOutput: " << month << " " << day << ", " << year << endl;
	
	return 0;
}

// FUNCTION TO SLICE THE STRING: 
//	str IS THE INPUT STRING
//	part IS THE PART OF DATE: 0(MONTH), 1(DAY), 2(YEAR)
int dateSlice (string str, int part) {
	string temp;
	int d;
	int count = 0;
	int i = 0;
	int j = 0;
	
	while (count != part) {								// GET PART part OF THE STRING
		if (count != part && str[i] == '/')
			count++;
			
		i++;
	}
	
	j = i;												// INITIALIZE THE READING HEAD POINT TO THE INPUT STRING
	
	while (str[j] != '/' && str[j] != '\0')				// GET THE ENDING OF THE PART.
		j++;
	
	temp.append (str, i, (j-i));						// GET THE PART OF THE STRING, WHERE i IS THE POSITION AND (j-i) IS THE SIZE TO COPY TO str
	
	return (static_cast<int>(atoi (temp.c_str())));		// CONVERT THE STRING INTO INT
}

// FUNCTION TO GET THE MONTH TEXT BASED ON m
string getMonthText (int m) {
	switch (m) {
		case 1:
			return "January";
			break;
		case 2:
			return "February";
			break;
		case 3:
			return "March";
			break;
		case 4:
			return "April";
			break;
		case 5:
			return "May";
			break;
		case 6:
			return "June";
			break;
		case 7:
			return "July";
			break;
		case 8:
			return "August";
			break;
		case 9:
			return "September";
			break;
		case 10:
			return "October";
			break;
		case 11:
			return "November";
			break;
		case 12:
			return "December";
			break;
	}
}

