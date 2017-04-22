#ifndef ESSAYCLASS_H
#define ESSAYCLASS_H

class EssayClass
{
	private:
	    double Grammar;
	    double Spelling;
	    double Correctlen;
	    double Content;
	    double score;
	    char letterGrade;
	    
	public:
	    EssayClass ()
		{ 
			Grammar = 0.0; 
			Spelling = 0.0;
			Correctlen = 0.0;
			Content = 0.0; 
			score = 0.0;
			letterGrade = ' ';
		}
		
		EssayClass(double g, double sp, double cl, double c,double s, char lg)
		{  
			Grammar = g;
			Spelling = sp;
			Correctlen = cl;
			Content = c;
			score = s;
			letterGrade = lg;
		}
		
		void setScore( double g, double sp, double cl, double c)
		{ 
			Grammar = g;
			Spelling = sp;
			Correctlen = cl;
			Content = c; 
		}
	
		void addScore()
		{ score = Grammar + Spelling + Correctlen + Content; }
		
		double getScore ()
		{ return score; }
	 
		void FindletterGrade()
		{ 
			if (score > 80)
			{letterGrade = 'A';}	
			else if (score > 70)
			{letterGrade = 'B';}
			else if (score > 60)
			{letterGrade = 'C';}
			else if (score > 40)
			{letterGrade = 'C';}
			else if (score > 30)
			{letterGrade = 'C';}
			else
			letterGrade = 'F';
		}
		
		char getletterGrade () const 
		{
			return letterGrade;
		}
 };
#endif 
