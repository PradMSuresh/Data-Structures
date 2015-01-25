#include "linkedlist.hpp"

#include <iostream>
#include <cstddef>

using namespace std;

bool LinkedList::isFull(){
	Node* location;
	
	try {
		location = new Node ;
		delete location;
		return false;
	}
	catch ( bad_alloc exception)
	{
		return true;
	}
	
}

int LinkedList::length(Node* head)
{
	int count = 1;
	
	if ( head == NULL)
	return count - 1;
		
	
	Node* temp;
	temp = head;

	while ( temp -> next != NULL)
	{
		temp = temp->next;
		count ++;
	}

	return count;
}


void LinkedList::deleteList(Node* head) 
{
	Node* temp;
	
	while ( head !=NULL)
	{
		temp = head;
		head = head-> next ;
		pop(temp);
		cout << "The element has been popped" ;
	}
	
	if ( head == NULL)
	cout << "The list is empty and the memory is freed" << endl;
}


Node* LinkedList::push( Node* head , int element)
{
	Node* temp = new Node;
	temp -> data = element;
	temp -> next = head;
	head = temp;
	return head;
}
Node* LinkedList::insertItem(Node* head, int index, int element)
{
	
	if ( index == 0 )
		return push(head,element);
	
	Node* temp ;
	temp = head ;
	int count = 1;
	
	while (index != count)
	{
		temp = temp ->next;
		count++;
	}
	
	if (( index == count ) && ( temp -> next != NULL))
	{
		Node* target = new Node;
		target -> data = element;
		
		Node* dummy ;
		dummy = temp -> next;
		temp -> next = target;
		target -> next = dummy;
		
	}
	
	if ((index == count) && ( temp->next == NULL))
	{
		Node* tail = new Node;
		tail->data = element;
		
		tail -> next = temp -> next;
		temp -> next = tail;
	}
	return head;
}

	
Node* LinkedList::deleteItem(Node* head ,int element){
	if ( head != NULL)
	{
		Node* temp;
		temp = head;
		if ( head -> data == element )
			return pop(head);
		else
			{
			while( (temp -> next != NULL) && ( temp -> next -> data != element) )
			{
			temp = temp -> next ;
			} 
		
			Node* target;
			target = temp -> next ;
		
			if ( target != NULL )
			{
			temp -> next = target -> next ;
			delete target ;
			}
		}
	}
	return head;
}


void LinkedList::show(Node* head) {
	Node* temp = new Node;
	temp = head;
	
	if ( head == NULL)
	cout <<"The list is empty"<<endl;
	
	while ( temp != NULL)
	{
		cout << temp -> data <<endl;
		temp = temp ->next;
	}
	
}

int LinkedList::countElement(Node* head , int n) {
	Node* temp;
	temp = head ;
	int count =  0 ;
	
	while( temp != NULL ) 
	{
		if( temp -> data == n )
			count++;
		temp = temp -> next;
	}
	
	return count;
}

void LinkedList::getNumber ( Node* head , int index) 
	{
	Node* temp ;
	temp = head;
	int count = 0;
	
	while ( (index != count) && ( temp != NULL ) ) 
	{
		temp = temp -> next;
		count ++;
	}
	
	if ( index == count )
		cout << temp -> data << " is present in the " << count << "position" << endl ;
	else 
		cout << "Not found" << endl;
}

Node* LinkedList::pop(Node* head)
{
	Node* temp;
	temp = head;
	int pop_value;
	if ( head == NULL)
    cout << "The list is empty" ;
    else
    {
		head = temp ->next;
		pop_value = temp ->data ;
		cout << "The data is :" << pop_value <<endl;
		delete temp;
	}
	return head;
}

Node* LinkedList::append(Node* head , Node* head_1)
{
	Node* temp;
	temp = head;
	while( temp -> next != NULL)
	{	
		temp = temp->next;
	}
	temp -> next = head_1;
	return head;
}

void* LinkedList::deleteDuplicates(Node* head)
{
	if (head == NULL)
	return 0;
	
	Node* temp  ;
	temp = head;
	Node* runner;
	
	while( temp -> next != NULL)
	{
		if( temp-> data == temp -> next -> data)
		{
			runner = temp -> next;
			temp -> next = temp -> next -> next;
			delete runner;
		}
		else
		{
			temp = temp -> next;
		}
	}
}
	
 

 



	
		
		
