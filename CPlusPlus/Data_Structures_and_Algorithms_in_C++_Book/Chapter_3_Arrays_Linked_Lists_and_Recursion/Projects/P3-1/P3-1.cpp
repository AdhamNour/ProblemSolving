#include <iostream>
#include "ThreeDMatrix.h"
using namespace std;
int main(){
	int n =3;
	ThreeDimentionalMatrix x(n,n,n);
	for(int i = 0 ;  i<n ; i++)
		for(int j =0 ; j<n ; j++)
			for(int k = 0 ; k <n ; k++)
				x.at(i,j,k) = i+j+k;
	cout<<x.at(2,2,2)<<endl;
	
	ThreeDimentionalMatrix y(n,n,n);
	for(int i = 0 ;  i<n ; i++)
		for(int j =0 ; j<n ; j++)
			for(int k = 0 ; k <n ; k++)
				y.at(i,j,k) = i+j+k;
	cout<<y.at(2,2,2)<<endl;

	y.add(x);
	cout<<y.at(2,2,2)<<endl;

			
	return 0;
}
