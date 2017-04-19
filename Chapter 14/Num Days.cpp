#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

class Numdays 
{
	private:
		double days;
		int hours;
		
	public:
		Numdays();
		Numdays(int h);
		void setHours(int);
		void setDays(double);
		int getHours();
		double getDays();
	
		double operator + (const Numdays a)
		{
			return hours + a.hours;
		}
		
		double operator - (const Numdays a)
		{
			return hours - a.hours;
		}
		
		Numdays operator ++ ()
		{
			++hours;
			days = hours / 8;
			return *this;
		}
		
		Numdays operator ++ (int)
		{
			Numdays temp(hours);
			hours++;
			days = (hours + 1) / 8;
			return temp;
		}
		
		Numdays operator -- ()
		{
			--hours;
			days = hours / 8;
			return *this;
		}
		
		Numdays operator -- (int)
		{
			Numdays temp(hours);
			hours--;
			days = (hours - 1) / 8;
			return temp;
		}
};

Numdays::Numdays()
{
	days = 0;
	hours = 0;
}

Numdays::Numdays(int h)
{
	hours = h;
	days = 0;
}

void Numdays::setHours(int h)
{
	hours = h;
	//days = h / 8;
}

void Numdays::setDays(double d)
{
	if (hours < 8)
	{
		days = 0;
	}
	else{
		days = d / 8;
	}
}

int Numdays::getHours()
{
	return hours;
}

double Numdays::getDays()
{
	return days;
}

int main()
{
	Numdays d(0);
	int h;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Num Days Class"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	cout << " Please enter a certain amount of hours to convert: ";
	cin >> h;
	
	
	
	while (h >= 0) 
	{
		d.setHours(h);
		d.setDays(h);
		h = 0;
		cout << " The number of hours you enter is " << d.getHours() <<" hours" << endl;
		cout << " That would mean you work about " << d.getDays() << " days " << endl;
		cout << " \nPlease enter another amount of hours to convert: (negative number for exit): ";
		cin >> h;
	}
	
	cout << " \nExit!" << endl;
	
	return 0;
}

