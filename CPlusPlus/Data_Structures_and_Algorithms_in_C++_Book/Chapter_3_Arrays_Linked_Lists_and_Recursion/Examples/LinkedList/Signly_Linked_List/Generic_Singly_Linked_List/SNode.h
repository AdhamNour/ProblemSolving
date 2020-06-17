#ifndef SNODE_H
#define SNODE_H


template<typename E>
class SNode{
private:
	E elem;
	SNode<E>* next; 
	template<typename T>  friend class SLinkedList;
};
#endif
