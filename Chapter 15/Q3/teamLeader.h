#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>						
#include <iostream>

using namespace std;

class TeamLeader
{
	private:
		int monthlyBonus;
		int trainingHours; 
		int attendent; 
		
	public:
		// Default constructor
		TeamLeader()
		{ 
			monthlyBonus =0;
		 	trainingHours = 0;
		 	attendent = 0;
		}

 		// Constructor
		TeamLeader(int mb, int th, int a)
		{
			
			monthlyBonus = mb;
			trainingHours = th;
			attendent = a;
	
		}

 		void setMonthlyBonus(int mb)
		{
			monthlyBonus = mb;
		}
		
		void setTrainingHours(int th)
		{
			trainingHours = th;
		}
		
		void setAttendent(int a)
		{
			attendent = a;
		}

		int getMonthlyBonus() const
		{
			return monthlyBonus;
		}
		
		int getTrainingHours() const
		{
			return trainingHours;
		}
		
		int getAttendent() const
		{
			return attendent;
		}
 };

#endif
