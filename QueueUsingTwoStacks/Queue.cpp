#include "Queue.hpp"

#include <iostream>
#include <stack>



Queue::Queue() {
	int size = -1;
	int topElement = -1;
}

Queue::~Queue() {
	while(newStack.empty())
	{
		newStack.pop();
	}
	while(oldStack.empty())
	{
		oldStack.pop();
	}
}

void  Queue::enqueue(int element)
{
	
	newStack.push(element);
}

int Queue::dequeue() {
	if( oldStack.empty())
	{
		while(!newStack.empty())
		{
			topElement = newStack.top();
			oldStack.push(topElement);
			newStack.pop();
		}
	}
	
	if(!oldStack.empty())
	{
		topElement=oldStack.top();
		oldStack.pop();
	}
	else
	{
		cout << endl << "Error Queue already Empty" << endl ;
	}
	return topElement;
}

int Queue::Size()
{
	return (oldStack.size() + newStack.size()) ;
}

bool Queue::empty()
{
	if ( oldStack.empty() && newStack.empty() )
	return true;
	else
	return false;
}

void Queue::clear()
{
	while(newStack.empty())
	{
		newStack.pop();
	}
	while(oldStack.empty())
	{
		oldStack.pop();
	}
}
