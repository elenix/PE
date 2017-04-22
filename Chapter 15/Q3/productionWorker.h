#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "teamLeader.h"					// Needed for the employee class.
#include <iostream>

using namespace std;

class productionWorker : public TeamLeader
{
	private:
		int shift;
		double hourlyPayRate;

	public:
		productionWorker(): TeamLeader()
		{
			shift = 0;
			hourlyPayRate = 0.0;
		}
		
		productionWorker(int mb, int th, int a, int s, double hpr) : TeamLeader(mb, th, a)
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
