
#include "stack.hpp"

#include <iostream>
#include <cstddef>

using namespace std;

void stack::push(int element)
{
	Node* temp = new Node;
	temp -> next = head;
	temp -> data = element;
	head = temp;
}

void stack::pop()
{
	Node* temp;
	temp = head;
	head = temp->next;
	cout << " The element that has been popped: "<< temp -> data;
	delete temp;
}

int stack::size()
{
	if ( head == NULL)
	{
		return 0;
	}
	
	Node* temp;
	int count = 1;
	
	temp = head;
	while ( temp -> next != NULL)
	{
		temp = temp -> next;
		count ++;
	}
	
	return count;
}

bool stack::isEmpty()
{
	return (head == NULL);
}

void stack::clear()
{
	Node* temp ;
	
	while ( head !=NULL)
	{
		temp = head;
		head = head-> next ;
		delete temp;
	}
	
	if ( head == NULL)
	cout << "The list is empty and the memory is freed" << endl;
}

void stack::peek()
{
	if ( head == NULL)
	cout <<"The list is empty";
	else 
	cout <<"The number is :"<< head->data;
}

		
