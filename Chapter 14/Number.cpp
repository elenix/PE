#include <iostream> 
#include <string> 
#include <iomanip>

using namespace std;

class Numbers {
	
	private:
		int number;
		static string ones[];
		static string tens[];
		static string teens[];
		static string hundreds[];
		static string thousands[];
	
	public:
		Numbers();
		
		Numbers(int num)
		{
			setNum(num); 
		};
		
		void setNum(int num)
		{ 
			number = num; 
		};
		
		void print();
};

string Numbers::ones[] = { "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine " };

string Numbers::teens[] = { "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

string Numbers::tens[] = { "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety " };

string Numbers::hundreds[] = { "One Hundred ", "Two Hundred ", "Three Hundred ", "Four Hundred ", "Five Hundred ", "Six Hundred ", "Seven Hundred ", "Eight Hundred ", "Nine Hundred " };

string Numbers::thousands[] = { "One thousand ", "Two thousand ", "Three thousand ", "Four thousand ", "Five thousand ", "Six thousand ", "Seven thousand ", "Eight thousand ", "Nine thousand " };

void Numbers::print() 
{
	cout << " >> ";
	
	if (number == 0)
	{
		cout << ">> Zero";
	}
	
	if(number >= 1000) 
	{
		int t = number / 1000;
		
		//cout << (number % 1000 - 1) << endl;
		
		//cout << thousands[(number % 1000) - 1];
		cout << thousands[t - 1];
		number = number % 1000; 
	}
	
	if(number >= 100) 
	{
		int h = number / 100;
		
		//cout << (number % 100 - 1) << endl;
		
		//cout << hundreds[number % 100 - 1];
		//number = number - 100; 
		cout << hundreds[h - 1];
		number = number % 100; 
	}
	
	if(number >= 20) 
	{ 
		int ten = number / 10;
	
		//cout << (number % 10 - 1) << endl;
	
		//cout << tens[number % 10 - 1];
		//number = number - 10;
		
		cout << tens[ten - 2];
		number = number % 10; 
	}
	
	if(number >= 10 && number <= 19)
	{	
		cout << teens[number % 10] <<endl;
		number = number - 10; 
		
		return;
	}
	
	if(number < 10 && number > 0)
	{
		number = number -1;
		cout << ones[number];
	}
	
	cout<<endl;
}

int main() 
{
	int number;
		
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Number Class"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	cout << " Please enter the amount you would like to translate into words: ";
	cin >> number;
	
	while (number >= 0) 
	{
		Numbers n(number);
		n.print();
		number = 0;
		cout << "\n please enter another number (negative number for exit): ";
		cin >> number;
	}
	
	cout << "\nExit!" << endl;
	
	return 0;
}
