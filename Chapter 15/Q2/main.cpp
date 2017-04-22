#include <iostream>
#include <string>
#include <iomanip>
#include "shiftSupervisor.h"
using namespace std;

char again;

int main()
{
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(60)<<"Employee and ShiftSupervisor Classes"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	do
	{	
		 ShiftSupervisor shiftSupervisor;
		 string supervisorName;
		 int supervisorNumber;
		 int supervisorHireDate;
		 int supervisorSalary;
		 int supervisorBonus;

		 cout << "Supervisor's name: ";
		 cin >> supervisorName;
		 cout << "Supervisor's ID number: ";
		 cin >> supervisorNumber;
		 cout << "Supervisor date hired(DDMMYYYY): ";
		 cin >> supervisorHireDate;
		 cout << "Supervisor's salary: ";
		 cin >> supervisorSalary;
		 cout << "Supervisor's bonus: ";
		 cin >> supervisorBonus;
	
		 shiftSupervisor.setEmplName(supervisorName);
		 shiftSupervisor.setEmplNumber(supervisorNumber);
		 shiftSupervisor.setHireDate(supervisorHireDate);
		 shiftSupervisor.setSalary(supervisorSalary);
		 shiftSupervisor.setBonus(supervisorBonus);
		 
		 cout << "\n\n-----------------------" << endl;
		 cout << "Shift Supervisor Result" << endl;
		 cout << "-----------------------" << endl;
		 cout << "Employee Name: " << shiftSupervisor.getEmplName() << endl;
		 cout << "Employee Number: " << shiftSupervisor.getEmplNumber() << endl;
		 cout << "Hire Date: " << shiftSupervisor.getHireDate() << endl;
		 cout << "Salary: $" << shiftSupervisor.getSalary() << endl;
		 cout << "Bonus: $" << setprecision(2) << fixed << shiftSupervisor.getBonus() << endl;
		 cout << "Total Earnings: $" << shiftSupervisor.getSalary() + shiftSupervisor.getBonus() << endl;
		 
		 cout << "\nDo you want to run this program again? Y/N: ";
		 cin >> again;
		 
	} while (again == 'y' || again == 'Y');

	return 0;
}
