#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"please enter a number"<<endl;
	cin>>n;
	cout<<"you have to divide by 2 the following amount before going under 2 " <<endl; 
	cout<<int(log(n)/log(2))-1<<endl;
	return 0;
}
