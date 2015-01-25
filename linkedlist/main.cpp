#include <iostream>

#include "linkedlist.hpp"
#include "Node.hpp"
#include <cstddef>

using namespace std;


int main () {

Node* head =NULL;

LinkedList list;
head = list.push(head,5);
head = list.push(head,5);
head = list.push(head,5);
head = list.push(head,5);
head = list.push(head,5);
head = list.push(head,5);
head = list.push(head,10);
head = list.push(head,15);
head = list.push(head,15);
head = list.push(head,20);
head = list.push(head,25);
head = list.push(head,30);
head = list.push(head,35);
list.deleteDuplicates(head
list.show(head);

cout <<"End of list 1" <<endl;

Node* head_1 = NULL;

head_1 = list.push(head_1,2);
head_1 = list.push(head_1,4);
head_1 = list.push(head_1,6);

list.show(head_1);

cout <<"End of list 2" <<endl;


}


	
	

