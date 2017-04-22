#include "employee.h"
#include "productionWorker.h"
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{
	char response;
	string name;
	int number, date, shift;
	double payRate;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Employee and ProductionWorker Classes"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;

	do
	{
		// Ask the user for the employee's name.
		cout << " What is the employee's name : ";
		cin >> name;
	
		// Ask the user for the employee's number.
		cout << " What is the employee's number: ";
		cin >> number;
	
		cout << " What is the employee's hire date(MMDDYYYY) : ";
		cin >> date;
	
		cout << " What shift does the employee work? Shift 1, or Shift 2? :";
		cin >> shift;
		
		if(shift < 0 || shift > 2)
		{
			cout << "An error occurred, please enter only 1 or 2 as a shift number: ";
			cin >> shift;
		}
	
		cout << " How much does the employee make per hour: ";
		cin >> payRate;
		
		// Create the Employee class object.
		Employee into(name, number, date);

		// Create the Production Worker class object.
		productionWorker in(shift, payRate);

		// Display the employee data.
		cout << "\n\n----------Here is the employee's data:----------\n\n";
		cout << "	Employee's Name: " << into.getEmplName() << endl;
		cout << "	Employee's Number: " << into.getEmplNumber() << endl;
		cout << "	Employee's Hire Date: " << into.getHireDate() << endl;
		cout << "	Employee's Shift: " << in.getShift() << endl;
		
		cout << setprecision(2) << fixed;			// Set the decimal point for the Pay Rate.
		cout << "	Employee's Hourly Pay Rate: $" << in.getHourlyPayRate() << endl;
		cout << "\n---------------------------------------------------\n\n";

		// Ask the user if they would like to rerun the program.
		cout << "\nWould you like to run the program again? (Y/N)" << endl;
		cin >> response;
		cout << endl;

		// Allows the getline function to be used more than once in a do-while loop.
		cin.ignore();
		
	} while (response == 'y' || response == 'Y');

	return 0;
}
