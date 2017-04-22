#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "employee.h"					// Needed for the employee class.
#include <iostream>

using namespace std;

class productionWorker 
{
	private:
		int shift;
		double hourlyPayRate;

	public:
		productionWorker()
		{
			shift = 0;
			hourlyPayRate = 0.0;
		}
		
		productionWorker(int s, double hpr)
		{
			shift = s;
			hourlyPayRate = hpr;
		}
	
		void setShift(int s)
		{
			shift = s;
		}
		
		void setHourlyPayRate(double hpr)
		{
			hourlyPayRate = hpr;
		}
		
		int getShift() const
		{
			return shift;
		}
		
		double getHourlyPayRate() const
		{
			return hourlyPayRate;
		}
};

#endif 
