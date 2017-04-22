// This program demonstrates a class with multiple inheritance.
#include <iostream>
#include <iomanip>
#include "DateTime.h"
using namespace std;

int main()
{
	// Define a DateTime object and use the default
	// constructor to initialize it.
	int day;
	int month;
	int year;
	int hour;
	int min;
	int sec;
	char type, response;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(60)<<"MilTime Classes"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
		
	do
	{
		cout << "Today's day: ";
		cin >> day;
		cout << "This month(in number): ";
		cin >> month;
		cout << "This year: ";
		cin >> year;
		cout << "Hour's now: ";
		cin >> hour;
		cout << "The minute's: ";
		cin >> min;
		cout << "The second's: ";
		cin >> sec;
		cout << "Is now AM or PM? (A/P): ";
		cin >> type;
		
		if(type == 'A' || type == 'a'  ){
			DateTime pastDay(day, month, year, hour, min, sec, hour, min);
				pastDay.showDateTime();
		}
		else{
			DateTime pastDay(day, month, year, hour, min, sec, (hour + 12), min);
				pastDay.showDateTime();
		}
		
		// Ask the user if they would like to rerun the program.
		cout << "\nWould you like to run the program again? (Y/N)" << endl;
		cin >> response;
		cout << endl;
	
		cin.ignore();
		
	} while (response == 'y' || response == 'Y');
	
	return 0;
}
