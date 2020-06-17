#ifndef ZERODIVIDE_H
#define ZERODIVIDE_H
#include "MathException.h"
class ZeroDivide : public MathException{
public:
	ZeroDivide(const string& err):MathException(err){}
#endif
