#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
struct date{
	int day,month,year;
	void generate(){
		month = rand()%12+1;
		year = rand()%20+1990;
		day = rand()&28+1;
	}
	bool operator== (const date& y){
		return day==y.day&&
		month==y.month;
	}	
	void print(){
		cout<<day<<'/'<<month<<'/'<<year<<endl;		
	}
};

int main(){
 	srand(time(NULL));
	for(int n = 5 ; n <=1000 ; n+=5){
		cout<<"The Number of Peaple equals\t"<<n<<endl;
		date* d = new date[n];
		for(int i=0;i<n;i++){
			d[i].generate();
		}
		
		for(int i=0;i<n;i++){
			d[i].print();
		}
		
		float c=0;
		
		for(int i=0;i<n;i++){
			for(int j=0 ; j<n ;j++){
				if(j==i) continue;
				if(d[i]==d[j]) c++;
			}		
		}
		
		if( c/n > 0.5 && n>23) cout<<"Paradox fulfiled , this the end of the world"<<endl;
		else cout<<"we are safe"<<endl;
		
		cout<<endl;
	}
return 0;
}
