#include "EssayClass.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	cout<<"----------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(60)<<"Essay Classes"<<endl;
	cout<<"----------------------------------------------------------------------------------------------"<<endl<<endl;
	char response;
	
	do
	{
	    double score1, score2, score3, score4;
	    EssayClass Student;
	    
	    cout << " Please enter up to 30 points for Grammar: "; 
	    cin >> score1;
	   	while(score1 < 0 || score1 > 30)
		{
	    	cout << " Please enter from 0 up to 30 points ONLY: "; 
	    	cin >> score1;
	    }
			   	
	    cout << "\n Please enter up to 20 points for Spelling: ";
	    cin >> score2 ; 
	   	while(score2 < 0 || score2 > 20)
		{
	    	cout << " Please enter from 0 up to 20 points ONLY: "; 
	    	cin >> score2;
	    }
	    
	    cout << "\n Please enter up to 20 points for Correct Length: ";
	    cin >> score3 ; 
	    while(score3 < 0 || score3 > 20)
		{
	    	cout << " Please enter from 0 up to 20 points ONLY: "; 
	    	cin >> score3;
	    }
	    
	    cout << "\n Please enter up to 30 points for Content: ";
	    cin >> score4;
	    while(score4 < 0 || score4 > 30)
		{
	    	cout << " Please enter from 0 up to 30 points ONLY!: "; 
	    	cin >> score4;
	    }
	    
	    Student.setScore(score1, score2, score3, score4) ;
	    Student.addScore();
	    
	    Student.FindletterGrade();
	    
	    cout << "\n Student received a " << Student.getScore();
	    cout << " out of 100 on the essay. Student receives a(n) " << 
	            Student.getletterGrade();
	    cout << " on the assignment.";
    
    	// Ask the user if they would like to rerun the program.
		cout << "\n\n Would you like to run the program again? (Y/N) : ";
		cin >> response;
		cout << endl;

		cin.ignore();
		
	} while (response == 'y' || response == 'Y');
    
	return 0;
}
