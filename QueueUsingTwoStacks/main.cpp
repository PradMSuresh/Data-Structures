#include "Queue.hpp"
#include <iostream>

int main()
{
	Queue pQueue ;
	pQueue.enqueue(10);
	pQueue.enqueue(20);
	pQueue.enqueue(30);
	pQueue.enqueue(40);
	
	int element = pQueue.dequeue();
	cout << element;
}

