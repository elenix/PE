#include <iostream> 
#include <string> 
#include <iomanip>

using namespace std;

class DayOfYear {
	
	private:
		int days;
		static string month[];
	
	public:
		DayOfYear();
		
		DayOfYear(int d)
		{
			setMonth(d); 
		};
		
		void setMonth(int d)
		{ 
			days = d; 
		};
		
		void print();
};

string DayOfYear::month[] = { "January ", "February ", "March ", "April ", "May ", "Jun ", "July ", "August ", "September ", "October ", "November ", "December " };

void DayOfYear::print() 
{
	cout << " >> ";
	
	if (days >=1 && days <= 31)
	{
		cout << month[0] << days;
	}
	else if (days >=32 && days <= 59)
	{
		cout << month[1] << (days - 31);
	}
	else if (days >=60 && days <= 90)
	{
		cout << month[2] << (days - 59);
	}
	else if (days >=91 && days <= 120)
	{
		cout << month[3] << (days - 90);
	}
	else if (days >=121 && days <= 151)
	{
		cout << month[4] << (days - 120);
	}
	else if (days >=152 && days <= 181)
	{
		cout << month[5] << (days - 151);
	}
	else if (days >=182 && days <= 212)
	{
		cout << month[6] << (days - 181);
	}
	else if (days >=213 && days <= 243)
	{
		cout << month[7] << (days - 212);
	}
	else if (days >=242 && days <= 273)
	{
		cout << month[8] << (days - 243);
	}
	else if (days >=274 && days <= 304)
	{
		cout << month[9] << (days - 273);
	}
	else if (days >=305 && days <= 334)
	{
		cout << month[10] << (days - 304);
	}
	else if (days >=335 && days <= 365)
	{
		cout << month[11] << (days - 334);
	}
	else{
		cout<<" Please enter the days from range 1 to 365";
	}
	
	cout<<endl;
}

int main() 
{
	int days;
		
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Day of the Year"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	cout << " Please enter the amount of day you would like to change into month: ";
	cin >> days;
	
	while (days >= 0) 
	{
		DayOfYear d(days);
		d.print();
		days = 0;
		cout << "\n please enter another number of days (zero or negative number for exit): ";
		cin >> days;
	}
	
	cout << "\nExit!" << endl;
	
	return 0;
}
