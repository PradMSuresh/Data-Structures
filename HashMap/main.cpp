#include <iostream>
#include <string>
#include "HashMap.hpp"

using namespace std;

int main () {
	
	HashMap Hash_1;
	Hash_1.HashBuild("Paul" , 40830);
	Hash_1.hashLookup("Paul");
	Hash_1.hashLookup("Paula");
	Hash_1.HashBuild("Pradeep", 31256);
	Hash_1.HashBuild("P", 31256);
	Hash_1.HashBuild("a", 31256);
	Hash_1.HashBuild("r", 31256);
	Hash_1.HashBuild("d", 31256);
	Hash_1.HashBuild("deep", 31256);
	Hash_1.HashBuild("Antony" , 23456);
	Hash_1.hashLookup("Pradeep");
	Hash_1.hashLookup("P");
	Hash_1.hashLookup("a");
	Hash_1.hashLookup("r");
	Hash_1.hashLookup("d");
	Hash_1.hashLookup("deep");
	cout << "Count :" << Hash_1.itemsInTheIndex(3);
	Hash_1.printItemsintheIndex(3);
	Hash_1.removeItem("a");
	Hash_1.removeItem("P");
	Hash_1.removeItem("r");
	Hash_1.removeItem("d");
	Hash_1.printItemsintheIndex(3);
}
