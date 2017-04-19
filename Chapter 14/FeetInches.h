#ifndef FEETINCHES_H
#define FEETINCHES_H

class FeetInches
{
private:
	int feet;
	int inches;
	static int objectCount;
	void simplify();
	
public:
	// default constructor
	FeetInches(int f = 0, int i = 0)
	{ feet = f;
	  inches = i;
	  objectCount++; }

	// mutator functions
	void setFeet(int f)
	{ feet = f; }

	void setInches(int i)
	{ inches = i;
	  simplify(); }

	// accessor functions
	int getFeet() const
	{ return feet; }

	int getInches() const
	{ return inches; }

	int getObjectCount() const
	{ return objectCount; }

	// overloaded operators
	FeetInches operator+(const FeetInches &);
	FeetInches operator-(const FeetInches &);
};

#endif 
