#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression{
//this is the code fragment in page 80
public:
	Progression(long f=0):first(f),cur(f){} //constructor
	virtual ~Progression(){}; //destructor
	void printProgression(int n);
protected:
	virtual long firstValue();
	virtual long nextValue();
protected:
	long first;
	long cur;
};

#endif
