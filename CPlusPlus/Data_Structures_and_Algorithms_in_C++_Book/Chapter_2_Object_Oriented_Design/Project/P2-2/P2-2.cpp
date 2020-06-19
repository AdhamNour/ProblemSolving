#include<iostream>
using namespace std;
int main(){
	int charged , given;
	cout<<"please enter the amount of charged money in Egyptian Pound"<<endl;
	cin>>charged;
	cout<<"please enter the amount of given money in Egyptian Pound"<<endl;
	cin>>given;
	cout<<"you should give the following amount of money back"<<'\t';
	int output =given - charged;
	cout<<output<<endl;

	int stack = output /200;
	if(stack != 0)
		cout<<"200LE :\t"<<stack<<endl;
	output%=200;
	
	stack = output/100;
	if(stack != 0)
		cout<<"100LE :\t"<<stack<<endl;
	output%=100;
	
	stack = output/50;
	if(stack != 0)
		cout<<"50LE :\t"<<stack<<endl;
 	output%=50;
	
	stack = output/20;
	if(stack != 0)
		cout<<"20LE :\t"<<stack<<endl;
 	output%=20;
	
	stack = output/10;
	if(stack != 0)
		cout<<"10LE :\t"<<stack<<endl;
 	output%=10;
	
	stack = output/5;
	if(stack != 0)
		cout<<"5LE :\t"<<stack<<endl;
	output%=5;
	if(output !=0)
		cout<<"1LE :\t"<<output<<endl;
	return 0;
}
