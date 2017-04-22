#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>						
#include <iostream>

using namespace std;

// Employee class declaration

class Employee
{
	private:
		string name; // To hold the employee name
		int number; // to hold employee phone number
		int date; //hire date
		
	public:
		// Default constructor
		Employee()
		{ 
			name ="";
		 	number = 0;
		 	date = 0;
		}

 		// Constructor
		Employee(string n, int num, int d)
		{
			
			name = n;
			number = num;
			date = d;
	
		}

 		void setEmplName(string n)
		{
			name = n;
		}
		
		void setEmplNumber(int n)
		{
			number = n;
		}
		
		void setHireDate(int d)
		{
			date = d;
		}

		string getEmplName() const
		{
			return name;
		}
		
		int getEmplNumber() const
		{
			return number;
		}
		
		int getHireDate() const
		{
			return date;
		}
 };

#endif
