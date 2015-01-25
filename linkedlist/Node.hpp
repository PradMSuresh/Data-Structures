#ifndef NODE_HPP
#define NODE_HPP

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
