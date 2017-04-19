#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string fileName, buffer;
	int count = 0;
	char ch;
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
		
		fileName = "5Lines.txt";
	}
	else if(option == 2){
		
		fileName = "20Lines.txt";
	}
	else{
		
		fileName = "30Lines.txt";
	}
	
	fstream infile(fileName.c_str(), ios::in);

	if (!infile)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	for (long i = 0; count <= 10; i++)
	{
		infile.seekg(-1 * i, ios::end);
		ch = infile.get();
		if (ch == '\n')
		{
			count++;
		}
	}
	infile.seekg(0, ios::cur);
	getline(infile, buffer);
	cout << buffer << endl;
	return 0;
}
