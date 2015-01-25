#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"


class LinkedList{

public:

bool isFull();
Node* push(Node* head,int element);
Node* insertItem(Node* head , int index , int element);
Node* deleteItem(Node* head ,int element);
Node* pop(Node* head);
Node* append(Node*head , Node* head_1);
int countElement(Node* head , int n);
void deleteList(Node* head);
void show(Node* head);
void getNumber ( Node* head , int index);
int length(Node* head);
void* deleteDuplicates(Node* head);

};

#endif
	
