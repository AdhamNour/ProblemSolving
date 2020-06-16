#include <iostream>
#include<string>
#include "BasicVector.h"
using namespace std;
int main(){
	int cap =5;
	BasicVector<int> x(cap);
	for(int i = 0 ; i < cap ; i++){
		x[i]=i;
	}
	for(int i = 0; i < cap; i++){
		cout<<x[i]<<endl;
	}
return 0;
}
	
