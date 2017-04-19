#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int *getArray(int num);

int main()
{
	int size;
	int* array;
	
	cout << "***********************************************************************************************************************" << endl;
	cout << setw(65)<< "ARRAY ALLOCATOR" << endl;
	cout << "***********************************************************************************************************************" << endl << endl;

	cout << "Enter the number size for the array: ";
	cin >> size;
	cout<<endl;

	array = getArray(size);
	cout << "-------------------------------------------------------"<<endl<<endl;
	
	cout <<endl<< "Result: "<<endl;
	
	for(int i = 0; i < size
	; ++i)
	{
		cout <<"  "<< array[i] << endl;
	}
	
	cout<<endl<<"\tNice!"<<endl;
	delete[] array;

	return 0;
}

int *getArray(int num)
{
	int* array = NULL;
	int *ptr = array;

	array = new int[num];

	cout << "Enter the intergers to be placed in the array below.\n";
	cout << "-------------------------------------------------------"<<endl<<endl;

	for (int i = 0; i < num; i++)
	{
		cout << " Slot number  " << (i + 1) << " : ";
		cin >> array[i];

	}
	ptr = array;

	return ptr;
}
