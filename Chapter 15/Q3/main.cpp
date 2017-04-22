#include "teamLeader.h"
#include "productionWorker.h"
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{
	productionWorker PW;
	int monthlyBonus;
	int trainingHours;
	int attendent;
	int shift;
	double payRate;
	char response;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(60)<<"TeamLeader and ProductionWorker Classes"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;

	do
	{
		// Ask the user for the employee's name.
		cout << " What is the team leader's monthly bonus: ";
		cin >> monthlyBonus;
	
		// Ask the user for the employee's number.
		cout << " What is the team leader's training hours: ";
		cin >> trainingHours;
	
		cout << " What is the total training hours that the team leader has attended: ";
		cin >> attendent;
	
		cout << " What shift does the employee work? Shift 1, or Shift 2? :";
		cin >> shift;
		
		if(shift < 0 || shift > 2)
		{
			cout << "An error occurred, please enter only 1 or 2 as a shift number: ";
			cin >> shift;
		}
	
		cout << " How much does the employee make per hour: ";
		cin >> payRate;
		
		PW.setMonthlyBonus(monthlyBonus);
		PW.setTrainingHours(trainingHours);
		PW.setAttendent(attendent);
		PW.setShift(shift);
		PW.setHourlyPayRate(payRate);

		// Display the employee data.
		cout << "\n\n----------Here is the employee's data:----------\n\n";
		cout << "	Team Leader's monthly bonus: " << PW.getMonthlyBonus() << endl;
		cout << "	Team Leader's training hours: " << PW.getTrainingHours() << endl;
		cout << "	Total Training Hours: " << PW.getAttendent() << endl;
		cout << "	Employee's Shift: " << PW.getShift() << endl;
		
		cout << setprecision(2) << fixed;			// Set the decimal point for the Pay Rate.
		cout << "	Employee's Hourly Pay Rate: $" << PW.getHourlyPayRate() << endl;
		cout << "\n---------------------------------------------------\n\n";

		// Ask the user if they would like to rerun the program.
		cout << "\nWould you like to run the program again? (Y/N)" << endl;
		cin >> response;
		cout << endl;

		cin.ignore();
		
	} while (response == 'y' || response == 'Y');

	return 0;
}
