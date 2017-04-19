#include <iostream>
#include <iomanip>
using namespace std;

int doSomething(int *x, int *y)
{
	int temp = *x;
	*x= *y * 10;
	*y = temp * 10;
	return *x+*y;
}

int main()
{
	int y,z;

	cout << "***********************************************************************************************************************" << endl;
	cout << setw(65)<< "POINTER REWRITE" << endl;
	cout << "***********************************************************************************************************************" << endl << endl;

	cout << "Please enter a number : ";
	cin >> y;
	cout << "Please enter another number : ";
	cin >> z;


	doSomething(&y, &z);

	cout << doSomething(&y, &z) << " = y(" << y << ") + z(" << z << ")" << endl;
	
	return 0;
}
