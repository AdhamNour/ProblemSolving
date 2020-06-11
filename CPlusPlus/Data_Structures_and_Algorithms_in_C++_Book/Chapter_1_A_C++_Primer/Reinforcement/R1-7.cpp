#include<iostream>
using namespace std;
int sum(const int& n){
int s = 0;
for(int i =0 ; i<n ; i++) s+=i;
return s;
}
int main(){
cout<<sum(100)<<endl;
return 0;
}
