#ifndef STRINGLINKEDLIST_H
#define STRINGLINKEDLIST_H
#include "StringNode.h"
class StringLinkedList{
public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const string& front() const;
	void addFront(const string& e);
	void removeFront();
private:
	StringNode* head;
};
#endif
