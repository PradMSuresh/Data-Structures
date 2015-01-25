#ifndef _NODE_HPP
#define _NODE_HPP

#include <cstddef>
#include <string>

using namespace std;

class Node{
	
	public:
	
	string key;
	int number;
	Node* next;
	
	Node() {
		next = NULL;
	}
};

#endif
