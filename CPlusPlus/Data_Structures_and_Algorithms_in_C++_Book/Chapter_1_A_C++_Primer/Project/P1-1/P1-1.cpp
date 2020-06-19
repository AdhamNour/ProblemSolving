#include <iostream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	srand(time(NULL));
	int n =100,t=8;
	string str = "I will always use object-oriented design";
	for(int i =0 ; i < n ; i++){
		string x = str;
		for(int i = 0 ; i < 8 ; i++)
			x.erase(x.begin()+rand()%x.size());
		cout<<i<<'\t'<<x<<endl;
	}
	return 0;
}
