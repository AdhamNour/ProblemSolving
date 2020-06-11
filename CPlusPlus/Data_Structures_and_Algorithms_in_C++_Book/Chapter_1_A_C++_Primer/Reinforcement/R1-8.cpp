#include<iostream>
using namespace std;
bool isMultiple(const long& n, const long&m){
return n%m==0;
}
int main(){
int n = 500 , m=250;
cout<<isMultiple(n,m)<<endl;
n=501;
cout<<isMultiple(n,m)<<endl;
return 0;
}
