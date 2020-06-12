#include "ArithmaticProgression.h"
#include "GeometricProgression.h"
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	Progression* prog;
	cout<<"Arithmatic Progression with default increament"<<endl;
	prog = new ArithmaticProgression();
	prog->printProgression(10);
	delete prog; // decreasing memory leaks
	
	cout<<"Arithmatic Progression with increment 10"<<endl;
	prog = new ArithmaticProgression(10);
	prog-> printProgression(10);
	delete prog; //decreasing memory leaks
	
	cout<<"Geometric Progression with default base"<<endl;
	prog = new GeometricProgression();
	prog->printProgression(10);
	delete prog;

	cout<<"Geometric Progression with base 3"<<endl;
	prog = new GeometricProgression(3);
	prog->printProgression(10);
	delete prog;
	
	return EXIT_SUCCESS;
}

