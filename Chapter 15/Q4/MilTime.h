// Specification file for the Time class
#ifndef MILTIME_H
#define MILTIME_H

class MilTime
{
	protected:
		int milHours;
		int milSeconds;
		
	public:
		// Default constructor
		MilTime()
		{ milHours = 0; milSeconds = 0;}
		
		// Constructor
		MilTime(int mh, int ms)
		{ milHours = mh; milSeconds = ms; }
		
		void setMilHours(int mh){
				milHours = mh;
		}
		
		void setMilSeconds(int ms){
			milSeconds = ms;
		}
		
		// Accessor functions
		int getMilHours() const
		{ return milHours; }
		
		int getMilSeconds() const
		{ return milSeconds; }
		
};
#endif
