#include<iostream>
using namespace std;
int main(){
	int counter =0;
	const int size = 5;
	int** M = new int*[size];
	for(int i = 0; i <size; i++){
		M[i] = new int[size];
		for(int j =0 ; j<size ; j++){
			M[i][j]=counter;
			counter++;
		}
	}
	for(int i = 0; i <size; i++){
		for(int j =0 ; j<size ; j++){
			cout<<M[i][j]<<' ';
		}
		cout<<endl;
	}


return 0;
}
