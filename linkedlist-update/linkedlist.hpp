#ifndef _LINKEDLIST_HPP
#define _LINKEDLIST_HPP

#include "node.hpp"
#include <cstddef>

class LinkedList {
	
	private:
	
	Node* head;
	
	public:
	
	void push (int element);
	void insertNode (int index , int element );
	void deleteElement (int element);
	void showList();
	void countElement(int element);
	void getNPosition(int element);
	void deleteList();
	void pop();
	void bubbleSort();
	void size();
	void append (Node* Second) ;
	
	LinkedList() {
		head = NULL;
	}
};

#endif
