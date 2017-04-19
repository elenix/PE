#include<iostream>
#include<cstdlib>
#include<cctype>
#include<iomanip>

using namespace std;

class DivSales
{
	private:
		double quarter [4];
        static double DivCorp;

    public:
        double display(int);
        void qutrSale();
};

double DivSales::DivCorp = 0;

void DivSales::qutrSale()
{
	int number;
	
	for (number = 0; number < 4; number++)
	{
	    cout << "The sales for the quarter "<< number+1<< ": ";
	    cin>> quarter [number];
	
	    DivCorp += quarter[number];
	
	    while (quarter[number] < 0)
	    {
	         cout<< "Error, please enter a positive sale amount: $";
	        cin >> quarter [number];
	    }
	} 
	
	cout<<endl;  
}

double DivSales::display(int input)
{
    return quarter [input];
}

int main ()
{
	int count;

	DivSales div[5];
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Corporate Sales Class"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;

    for (count=0; count<5; count++)
    {
        div [count].qutrSale();
    }
    return 0;
}
