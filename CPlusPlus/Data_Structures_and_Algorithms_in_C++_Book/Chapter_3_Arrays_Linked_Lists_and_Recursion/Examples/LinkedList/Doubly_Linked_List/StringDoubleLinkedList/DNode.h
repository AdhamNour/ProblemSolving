#ifndef DNODE_H
#define DNODE_H
#include<string>
typedef std::string Elem;
class DNode{
private:
	Elem elem;
	DNode* prev;
	DNode* next;
	friend class DLinkedList;
};
#endif
