#include <iostream>
#include "linkedlist.hpp"
#include <cstddef>

using namespace std;

void LinkedList::push (int element)
{
	Node* temp = new Node;
	
	temp -> data = element;
	temp -> next  = head;
	head = temp;
}

void LinkedList::showList()
{
	if(head == NULL)
	cout << "The list is empty" ;
	cout << endl;
	
	Node* temp;
	temp = head;
	
	while( temp != NULL)
	{
		cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	cout << endl;
}

void LinkedList::deleteElement( int element)
{
	if ( head == NULL)
	{
	cout <<"The list is empty nothing to delete";
	}
	else
	{
	Node* temp ;
	temp = head;
	
		if ( head -> data == element)
		{
		head = head -> next;
		delete temp;
		}
		else
		{
			while( ( temp -> next != NULL) && ( temp -> next -> data != element) )
			{
			temp = temp -> next;
			}
		
			if ( ( temp -> next == NULL) && ( temp -> data != element) )
			{
			cout << "The number was not found in the list" ;
			cout << endl;
			}
			else 
			{
			Node* target;
			target = temp -> next ;
			temp -> next = target -> next;
			delete target;
			}
		}
	}
}

void LinkedList::insertNode (int index , int element)
{
	if (index == 1)
	{
		push( element );
	}
	else
	{
		Node* temp;
		temp = head;
		int count = 1;
		
		while(count != index - 1)
		{
			temp = temp -> next;
			count ++;
		}
		
		Node* target = new Node;
		target -> next = temp -> next;
		temp -> next = target;
		target -> data = element;
	}
}

void LinkedList::countElement(int element)
{
	Node* temp ;
	temp = head;
	int count = 0;
	
	while( temp != NULL)
	{
		if ( temp -> data == element)
			count++;
		temp = temp -> next;
	}
	cout << "The count is :" << count;
	cout <<endl;
	
}


void LinkedList::getNPosition(int element)
{
	Node* temp;
	temp = head;
	int count = 1;
	
	while(temp != NULL)
	{
		if (temp -> data == element)
		{
		cout << "The index :" <<count;
		cout << endl;
		}
		count++;
		temp = temp -> next;
	}
}

void LinkedList::deleteList()
{
	Node* temp;
	
	while(head != NULL)
	{
	temp = head;
	head = head -> next;
	delete temp;
	}
	
	cout <<"The list is deleted and memory is freed";
	cout <<endl;
}

void LinkedList::pop()
{
	Node* temp;
	temp = head;
	
	head = head->next;
	cout << "The element that has been popped :" << temp -> data;
	delete temp;
}

void LinkedList::size()
{
	if( head == NULL)
	cout << "The list is empty";
	
	else
	{
	Node* temp;
	temp = head;
	
	int count = 0;
	while(temp != NULL)
	{
		temp = temp -> next ;
		count++;
	}
	cout << " The size :" << count;
	}
}

void LinkedList::append(Node* Second)
{
	Node* temp ;
	temp = head;
	
	while( temp -> next != NULL)
	{
		temp = temp -> next;
	}
	
	temp -> next = Second;
}

	

	

		
			

		
		
		
		
		
