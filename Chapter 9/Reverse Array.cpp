#include <iostream>
#include <iomanip>

using namespace std;

void ReverseArray(int array[], int size);

int main()
{
	double *TestScores, total = 0.0;
	int numofTest, average;
	
	cout << "***********************************************************************************************************************" << endl;
	cout << setw(65)<< "REVERSE ARRAY" << endl;
	cout << "***********************************************************************************************************************" << endl << endl;

	cout << "How many element do you wish to enter: ";
	cin >> numofTest;
	cout<<endl;
	int array[numofTest];
	
	cout << "Enter the number to be placed in the array below.\n";
	cout << "-------------------------------------------------------"<<endl<<endl;

	for (int i = 0; i < numofTest; i++)
	{
		cout << " element number  " << (i + 1) << " : ";
		cin >> array[i];
	}
	
	cout <<endl<< "-------------------------------------------------------"<<endl<<endl;
	
	cout << "Array before reverese : "<<endl;
	
	for (int u =0; u < numofTest; u++){
		cout<<"\t"<<array[u];
	}
	
	cout<<endl;
	
	ReverseArray(array, numofTest);
	
	return 0;
}

void ReverseArray(int array[], int size){
	
	cout << "Array after reverese : "<<endl;
	
	for (int u = size; u > 0 ; u--){
		cout<<"\t"<<array[u-1];
	}
	
	
}

