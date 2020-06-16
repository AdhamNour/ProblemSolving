#include <iostream>
using namespace std;
template <typename T>
T genericMin(T a,T b){
	return (a<b ? a : b);
}

int main(){
	cout<<genericMin(3,4)<<' '
	    <<genericMin(2.1,5.3)<<endl;
	return 0;
}
