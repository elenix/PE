#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string fileName, encrypt;
	char ch;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"File Encryption Filter"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;

	cout << "Enter name of file to be encrypted (.txt): ";
	cin  >> fileName;
	cout << "Enter name for encrypted file: ";
	cin  >> encrypt;

	fstream infile(fileName.c_str(), ios::in);
	
	if (!infile)
	{
		cout << "Error opening file \"" << fileName;
		return 0;
	}

	fstream outFile(encrypt.c_str(), ios::out);

	while (!infile.fail())
	{
		infile.get(ch);
		ch += 10;
		outFile << ch;
	}
	
	cout<<"\nDone Encrypt! You can check it in the folder."<<endl<<endl;

	infile.close();
	outFile.close();
	return 0;
}
