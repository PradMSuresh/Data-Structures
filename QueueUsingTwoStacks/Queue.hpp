#ifndef _QUEUE_HPP
#define _QUEUE_HPP

#include <iostream>
#include <stack>

using namespace std;

class Queue {
	
	private :
	
	stack <int> oldStack ;
	stack <int> newStack;
	int size;
	int topElement;
	
	public:
	
	//Queue();
	//~Queue();
	void enqueue(int element);
	int dequeue();
	bool empty();
	int Size();
	void clear();
	//int peek();
};


#endif


