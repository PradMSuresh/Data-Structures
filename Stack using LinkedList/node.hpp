#ifndef _NODE_HPP
#define _NODE_HPP

#include <cstddef>

class Node {
	public:
	
	int data;
	Node* next;
	
	Node()
	{
		next = NULL;
	}
};

#endif
