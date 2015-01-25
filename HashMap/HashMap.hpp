#ifndef _HASHMAP_HPP
#define _HASHMAP_HPP

#include <cstddef>
#include <iostream>
#include <string>
#include "Node.hpp"

using namespace std;

class HashMap {
	
	private:
	
	static const int tableSize = 10;
	Node* HashTable[tableSize];
	
	public:
	HashMap();
	int HashFunction(string key);
	void HashBuild(string key , int number);
	int itemsInTheIndex(int index);
	void printTable();
	void hashLookup(string key);
	void printItemsintheIndex(int index);
	void removeItem(string key);
	

};

#endif 
	
	
