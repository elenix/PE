#include <iostream>
#include "FeetInches.h"
#include<iomanip>

using namespace std;

int main()
{
	int feet, inches;

	FeetInches first, second, third;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Feet inches Class"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;

	cout << "Enter a distance in feet and inches:"<<endl;
	cout << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;

	first.setFeet(feet);
	first.setInches(inches);

	cout << "Enter another distance in feet and inches:"<<endl;
	cout << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;

	second.setFeet(feet);
	second.setInches(inches);

	third = first + second;

	cout << "first + second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n";

	third = first - second;

	cout << "first - second = ";
	cout << third.getFeet() << " feet, ";
	cout << third.getInches() << " inches.\n\n";

	cout << "There were " << first.getObjectCount() << " objects\n";

	return 0;
}
