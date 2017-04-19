#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<setw(40)<<"Question 12"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl<<endl;
	
	string pass;
	cout<<"Enter your password: ";
	cin>>pass;
	int i,l,up,low,dig;
	
	/*These are flag variables*/
	up = low = dig = 0;
	
	/*Initially all are set to 0 i.e false*/
	l = pass.length();
	
	for(i=0;i<l;i++){

		if(pass[i]>='0' && pass[i]<='9'){
			dig = 1;
		}
		else{
			if(pass[i]>='A' && pass[i]<='Z')
			up = 1;
		}

		if(pass[i]>='a' && pass[i]<='z')
		low = 1;
	}
	/*4 conditions to form the password*/
	if(l>=6 && dig==1 && up==1 && low==1){
		cout<<"Your password meets the stated criteria.\n";
	}
	else{
		cout<<"Sorry bro.."<<endl;
	}

	if(l<6){
		cout<<"Your password is less than 6 characters.\n";
	}
	if(!up){
		cout<<"Your password does not contain uppercase letters.\n";
	}
	if(!dig){
		cout<<"Your password does not contain any digits.\n";
	}
	if(!low){
		cout<<"Your password does not contain lowercase letters.\n";
	}
	
	return 0;

}
