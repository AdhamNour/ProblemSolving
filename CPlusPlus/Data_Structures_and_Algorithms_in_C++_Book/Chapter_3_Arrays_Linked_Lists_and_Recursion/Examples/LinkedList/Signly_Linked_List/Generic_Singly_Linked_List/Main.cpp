#include<iostream>
#include<string>
#include "SLinkedList.h"
using namespace std;
int main(){
	SLinkedList<int>* nsll = new SLinkedList<int>();
	nsll->addFront(9);
	cout<<nsll->front()<<endl;
return 0;
}
