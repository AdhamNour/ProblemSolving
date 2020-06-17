#include<iostream>
#include "DLinkedList.h"
using namespace std;
int main(){
	DLinkedList* x = new DLinkedList();
	x->addFront("Adham Nour");
	cout<<x->front()<<endl<<x->back()<<endl;
return 0;
}
