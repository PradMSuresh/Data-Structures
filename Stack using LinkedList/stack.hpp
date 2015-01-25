#ifndef _STACK_HPP
#define _STACK_HPP

#include "node.hpp"

class stack {
	private:
	Node* head;
	
	public:
	
	void push(int element);
	void pop ();
	int size();
	void peek();
	bool isEmpty();
	void clear();
	
	stack(){
		head = NULL;
	}
};

#endif
