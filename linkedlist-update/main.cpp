#include <iostream>
#include "linkedlist.hpp"

using namespace std;

int main() 
{
	LinkedList list_1, list_2;
	
	list_1.push(1);
	list_1.push(2);
	list_1.push(3);
	list_1.showList();
	list_1.insertNode(4,4);
	list_1.push(4);
	list_1.showList();
	
	//list_1.countElement(4);
	//list_1.getNPosition(4);
	//list_1.size();
	
	list_2.push(10);
	list_2.push(9);
	list_2.push(8);
	list_2.showList();
	
	list_1.append(&list_2);
	
	/*LinkedList list_3;
	list_3.push(11);
	list_3.push(12);
	list_3.push(13);
	list_3.showList();
	*/
}
