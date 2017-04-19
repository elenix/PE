#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string ecrypted, decrypt;
	char ch;
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"File Decryption Filter"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;

	cout << "Enter name of file to be decrypted (.txt): ";
	cin  >> ecrypted;

	fstream inFile(ecrypted.c_str(), ios::in);
	if (!inFile)
	{
		cout << "Error opening file \"" << ecrypted;
		return 0;
	}

	cout << "Enter name for decrypted file: ";
	cin  >> decrypt;
	fstream outFile(decrypt.c_str(), ios::out);

	while (!inFile.fail())
	{
		inFile.get(ch);
		ch -= 10;
		outFile << ch;
	}

	cout<<"\nDone Decrypt! You can check it in the folder."<<endl;

	inFile.close();
	outFile.close();
	return 0;
}
