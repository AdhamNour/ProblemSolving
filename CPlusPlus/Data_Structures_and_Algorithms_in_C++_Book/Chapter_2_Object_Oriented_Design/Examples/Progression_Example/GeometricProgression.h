#ifndef GEOMETRICPROGRESSION_H
#define GEOMETRICPROGRESSION_H
#include"Progression.h"
class GeometricProgression : public Progression{
public:
	GeometricProgression(long i =2): Progression(i),base(i){}
protected:
	virtual long nextValue();
protected:
	long base;
};
#endif
