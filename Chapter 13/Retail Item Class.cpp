#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

int count = 1;

class RetailItem
{
	private:
		string description;
		int unitOnHand;
		double price;
		
	public:
		
		RetailItem()
		{
			description = "default";
			unitOnHand = 0;
			price = 0.0;
		}
		
		RetailItem(string d, int u, double p)
		{
			setDes(d);
			setUnits(u);
			setPrice(p);
		}
		
		void setDes(string d)
		{
			description = d;
		}
		
		void setUnits(int u)
		{
			unitOnHand = u;
		}
		
		void setPrice(double p)
		{
			price = p;
		}
		
		const string getDes() const
		{ return description;}
		
		int getUnits() const
		{ return unitOnHand;}
		
		double getPrice() const
		{ return price;}
};

void displayDetails(RetailItem obj)
{
	cout<<"Item #"<<count<<setw(30)<<obj.getDes()<<setw(30)<<obj.getUnits()<<setw(30)<<obj.getPrice()<<endl;
	count++;
}

int main()
{
	RetailItem me("Jacket", 12, 59.95);
	
	RetailItem fren("Designer Jeans", 40, 34.95);
	
	RetailItem family("Shirt", 20, 24.95);
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Retail Item Class"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(37)<<"Description"<<setw(30)<<"Units On Hand"<<setw(30)<<"Price"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------"<<endl<<endl;
	
	displayDetails(me);
	displayDetails(fren);
	displayDetails(family);
	
	return 0;
}
