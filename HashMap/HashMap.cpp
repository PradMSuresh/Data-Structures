#include<iostream>
#include<cstddef>
#include<string>
#include<cstdlib>
#include<cmath>
#include "HashMap.hpp"


using namespace std;

	
HashMap::HashMap() {	
	
	for ( int i = 0 ; i < tableSize ; i++)
		{
		HashTable[i] = new Node;
		HashTable[i] -> key = "Empty";
		HashTable[i] -> number = 0000;
		HashTable[i] -> next = NULL;
		}
	
	}


int HashMap::HashFunction(string key) 
{

	int a = 7;
	int b = 3;
	int p = 17;
	int index = 0;
	int length = key.length();
	for( int i = 0 ; i < length -1 ; i++)
	{
		index += (int)key[i];
	}
	index = ((((a*index)+b) % p ) % tableSize);
	return index;
}

void HashMap::HashBuild(string key , int number)
{
	int index = HashFunction(key);
	
	if (HashTable[index] -> key == "Empty")
	{
		HashTable[index] -> key = key;
		HashTable[index] -> number = number;
	}
	else
	{
		Node* Element = new Node;
		Element -> key = key;
		Element -> number = number;
		Element -> next = NULL;
		
		Node* temp ;
		temp = HashTable[index];
		
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		
		temp -> next = Element;
	}
}

void HashMap::hashLookup(string key)
{
	int index = HashFunction(key);
	
	if (HashTable[index] -> key == key)
	{
		cout << "The bucket is :" << index << endl;
		cout << " The key is :" << HashTable[index] -> key <<endl;
		cout << " The number is :" << HashTable[index]-> number << endl;
	}
	else
	{
		Node* temp ;
		temp = HashTable[index];
		
		while( (temp -> key != key) && (temp ->next != NULL) )
		{
			temp  = temp -> next ;
		}
		 if ( (temp -> key != key) && (temp ->next == NULL) )
		 {
			 cout << " The key : " << key <<" was not found" << endl;
		 }
		 else
		 {
		 cout << " The bucket is :" << index<< endl;
		 cout << " The key is :" << temp -> key  << endl;
		 cout << " The number is :" << temp -> number << endl;
		 }
		 
	 }
}	

int HashMap::itemsInTheIndex(int index)
{
	int count = 0 ;
	if ( HashTable[index] -> key == "Empty")
	{
		return 0;
	}
	else
	{
		//count++;
		Node* temp ;
		temp = HashTable[index];
		while(temp != NULL)
		{
			temp = temp -> next ;
			count++;
		}
		return count;
	}
}

void HashMap::printItemsintheIndex(int index)
{
	Node* temp;
	temp = HashTable[index];
	
	while( temp != NULL)
	{
		cout <<endl;
		cout << "The Bucket is :" << index <<endl;
		cout << "The key value is :" <<temp -> key<<endl;;
		cout << "The number is :"<<temp -> number<<endl;;
		temp = temp -> next;
	}
}

void HashMap::removeItem(string key)
{
	int index = HashFunction(key);
	
	if (HashTable[index] -> key == "Empty")
	{
		cout << "The list is already empty";
	}
	else if (HashTable[index] -> key == key && HashTable[index] -> next == NULL)
		{
			HashTable[index] -> key == "Empty";
			HashTable[index] -> number == 0000;
		}
	else if(HashTable[index] -> key == key && HashTable[index] -> next != NULL)
		{
			Node* temp ;
			temp = HashTable[index];
			HashTable[index] = HashTable[index] -> next;
			delete temp ;
		}
	else if(HashTable[index] -> key != key )
		{
			while ( temp -> next != NULL && HashTable[index] -> next ->key != key )
			{
				temp = temp -> next;
			}
			
				 Node * target;
				 target = temp -> next;
				 temp -> next = target -> next;
				 delete target;
			 }
		 }  
			
			
	
	
	
