#ifndef ARITHMATICPROGRESSION_H
#define ARITHMATICPROGRESSION_H
#include"Progression.h"
class ArithmaticProgression : public Progression{
public:
	ArithmaticProgression(long i =1): Progression(),inc(i){}
protected:
	virtual long nextValue();
protected:
	long inc;
};
#endif
