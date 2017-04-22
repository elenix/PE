// Implementation file for the DateTime class
#include <iostream>
#include <string>
#include "DateTime.h"

using namespace std;

//************************************************
// Default constructor *
// Note that this constructor does nothing other *
// than call default base class constructors. *
//************************************************
DateTime::DateTime() : Date(), Time(), MilTime()
{ }

//************************************************
// Constructor *
// Note that this constructor does nothing other *
// than call base class constructors. *
//************************************************
DateTime::DateTime(int dy, int mon, int yr, int hr, int mt, int sc, int mh, int ms) : Date(dy, mon, yr), Time(hr, mt, sc), MilTime(mh, ms)
{ }

//************************************************
// The showDateTime member function displays the *
// date and the time. *
//************************************************
void DateTime::showDateTime() const
{
	// Display the date in the form MM/DD/YYYY.
	cout << "\n---------Today's date-----------"<<endl;
	cout << getMonth() << "/" << getDay() << "/" << getYear();
	
	cout << "\n---------Time in 12hours-----------"<<endl;
	// Display the time in the form HH:MM:SS.
	cout << getHour() << ":" << getMin() << ":" << getSec();
	
	cout << "\n---------Time in 24hours-----------"<<endl;
	cout << getMilHours() << ":" << getMilSeconds() << endl;
}
