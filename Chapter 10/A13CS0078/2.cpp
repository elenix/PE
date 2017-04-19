#include <iostream> 
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

int main () {  

string string; 
int l, x;

cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<setw(40)<<"Question 2"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl<<endl;
 
 cout << "Please enter a word with 8 or more characters (no spaces please): " << endl <<endl;
 cout << "Your words: "; 
 cin >> string; 
 cout <<endl;

 l = string.length(); 

   if (l < 8){
     cout << "Error! Please enter a word more than 8 characters and no spaces: " <<    endl; 
	 cin >> string; 
 }


cout << "Backwards words: ";
for (x = string.length()-1; x >=0; x--){
   cout << string[x]; 
}

 return 0; 
}
