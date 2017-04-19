#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	ifstream file;  // in file an ifstream object
	char word[250];
	int option;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"File Head Program"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	cout<< "Please Choose The You Want To Test : "<<endl;
	cout<< "1. 5Lines.txt"<<endl;
	cout<< "2. 20Lines.txt"<<endl;
	
	cout<< "\nChoice : ";
	cin>> option;
	
	if(option == 1){
		file.open("5Lines.txt");
	}
	else if(option == 2){
		file.open("20Lines.txt");
	}
	else{
		file.open("30Lines.txt");
	}
	
	if (!file.is_open())
	{
		cout <<"\nYour Choice is invalid."<<endl;
		exit(EXIT_FAILURE);
	}
	
	int counter = 0;
	
	cout<<"\nResult: "<<endl<<endl;
	
	while (counter < 10 && file.good() ) // while input good and not at eof
	{
		file.getline(word, 250);
		counter++;
		cout << word << endl;
	}
	
	if (counter < 10) // if fewer than 10 lines
	{
		cout << "\nThe entire file was read." <<endl;
	}
		
	cout << "\nPress any button to exit.\n";
	cin.get(word, 250);
	
	return 0;	
}

