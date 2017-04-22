#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "employee.h"
#include <string>

class ShiftSupervisor : public Employee
{
	private:
		int salary;
		int bonus;

	public:
		ShiftSupervisor() : Employee()
		{
			salary = 0;
			bonus = 0;
		}

		ShiftSupervisor (string n, int num, int d, 
			int empSalary, int empBonus) : Employee(n, num, d)
		{
			salary = empSalary;
			bonus = empBonus;
		}

		void setSalary(int empSalary)
		{
			salary = empSalary;
		}

		void setBonus(int empBonus)
		{
			bonus = empBonus;
		}

		int getSalary()
		{
			return salary;
		}

		int getBonus()
		{
			return bonus;
		}
};

#endif 
