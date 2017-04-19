#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Date {
	
	int mm, dd, yy;
	public:
	Date(int newmm = 1, int newdd = 18, int newyy = 1991)
	{
		mm = newmm;
		dd = newdd;
		yy = newyy;
	};
	void Date1(); 
	void Date2();
	void Date3();
};

string monthName[12] = {"January","Febuary","March","April","May","June","July","August","September","October","November","December"};

void Date::Date1()
{ 
	cout<< mm <<"/"<<dd<<"/"<< yy <<endl; 
} 

void Date::Date2()
{ 
	cout<<monthName[mm-1]<<" "<<dd<<","<< yy <<endl; 
} 

void Date::Date3()
{ 
	cout<< dd <<" "<<monthName[mm-1]<<" "<< yy <<endl; 
} 

int main() {
	
	int mm, dd, yy;

	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Date"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;

	do {
		cout<<"Enter Month: ";
		cin>> mm;
	}
	while (mm < 1 || mm > 12);

	do {
		cout<<"Enter Date: ";
		cin>> dd;
	}
	while (dd < 1 || dd > 31);

	do {
		cout<<"Enter Year: ";
		cin>> yy;
	}
	while (yy < 1 || yy > 3000);

	cout<<"\nResult: "<<endl<<endl;

	Date newDate(mm , dd, yy);
	newDate.Date1();
	newDate.Date2();
	newDate.Date3();
	
	cout << "\nPress any button to exit.\n";
	
	return 0;
}
