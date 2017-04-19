#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

class Payroll
{
	private:
		double hours;
		double payrate;
		double grosspay;

	public:
		Payroll ()
		{
			hours = 0.0 ;
			payrate = 0.0;
			grosspay = 0.0;
	
		}

		Payroll (double h, double p)
		{ 
			hours = h;
			payrate = p;
			grosspay = hours * payrate;
		}

		double setHours (double h)
		{
			hours = h;
		}

		double setPayrate (double p)
		{
			payrate = p;
		}

		double getHours ()
		{ return hours; }
		
		double getPayrate ()
		{ return payrate; }

		double getGrosspay ()
		{ return grosspay; }

};

const int employees = 7;

int main ()
{

	int index;

	Payroll totalPay[employees];
	{
		ifstream datafile;

		datafile.open("payroll.dat");

		if (!datafile)
		cout << "Error opening data file \n";

		else
		{
			for (index = 0; index < 7; index++)
			{
				double hours;
				double payrate;
				double grosspay;

				datafile >> hours;
				datafile >> payrate;
				grosspay = hours * payrate;		

			cout << endl;
			cout << fixed << setprecision (2);
			cout << "Employee"  << setw (2) << (index+1) << "- Your Gross Pay is: $" 		
				 << totalPay[employees].getGrosspay () << endl;			
			cout << "***************************************************" << endl;
			}
		}	
		
		datafile.close();
	}		
	
	return 0;
}
