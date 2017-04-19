#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

class PersonalInfo
{
	private:
		string name;
		string address;
		int age;
		string phone;
		
	public:
		
		PersonalInfo()
		{
			name = "default";
			address = "default";
			age = 0;
			phone = "0";
		}
		
		PersonalInfo(string n, string addr, int a, string p)
		{
			setName(n);
			setAddress(addr);
			setAge(a);
			setPhone(p);
		}
		
		void setName(string n)
		{
			name = n;
		}
		
		void setAddress(string a)
		{
			address = a;
		}
		
		void setAge(int a)
		{age = a;}
		
		void setPhone(string p)
		{
			phone = p;
		}
		
		const string getName() const
		{ return name;}
		
		const string getAddress() const
		{ return address;}
		
		int getAge() const
		{ return age;}
		
		const string getPhone() const
		{return phone;}
};

void displayPersonalInfo(PersonalInfo obj)
{
	cout << "Name: " <<obj.getName()
		 << endl;
	cout << "Address: " <<obj.getAddress()
		 << endl;
	cout << "Age: " <<obj.getAge()
		 << endl;
	cout << "Phone: " <<obj.getPhone()
		 << endl << endl;
}

int main()
{
	PersonalInfo me("el","Bandar Putra", 23, "0199989889");
	
	PersonalInfo fren("mael","UTM Skudai", 23, "016677779");
	
	PersonalInfo family("ismail","Kampung Taib Andak", 23, "019456889");
	
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"Personal Information Class"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	
	cout << "Your information" << endl;
	cout << "---------------------------------------------"<<endl;
	displayPersonalInfo(me);
	cout << "Your friends' information" << endl;
	cout << "---------------------------------------------"<<endl;
	displayPersonalInfo(fren);
	cout << "Your family members' information" << endl;
	cout << "---------------------------------------------"<<endl;
	displayPersonalInfo(family);
	
	return 0;
}
