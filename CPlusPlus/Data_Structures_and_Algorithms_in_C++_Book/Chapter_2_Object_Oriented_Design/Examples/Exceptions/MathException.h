#ifndef MATHEXCEPTION_H
#define MATHEXCEPTION_H
#include<string>
using namespace std;
class MathException{
public:
	MathException(const string& err):errMsg(err){}
	string getError {return errMsg;}
private:
	string errMsg;
#endif
