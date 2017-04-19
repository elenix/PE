#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string fileName, buffer, search;		
	int count = 0;		
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"File String Search"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;	

	cout << "Enter the name of a file (.txt): ";
	cin  >> fileName;

	fstream file(fileName.c_str(), ios::in);
	if (!file)
	{
		cout << "Error opening file.\n";
		return 0;
	}

	cout << "\nEnter a string to search for in the file "<< fileName << ".\n";
	cout << "\nString: ";
	cin  >> search;
	cout << "\nAll lines in file that contain the string:\n\n";
	file.seekg(0, ios::beg);
	while (!file.fail())
	{
		getline(file, buffer);
		if (buffer.find(search,0) < buffer.length())
		{
			cout << buffer << endl;
			count++;
		}
		
	}

	cout << "\nNumber of times the string appeared in file: " << count << endl;

	file.close();
	return 0;
}
