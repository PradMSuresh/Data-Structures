#include "node.hpp"
#include "stack.hpp"
#include <cstddef>
#include <iostream>

using namespace std;


int main() 
{
		
	stack A;
	A.push(5);
	A.push(10);
	A.pop();
	A.pop();
	int count = A.size();
	cout <<endl;
	cout <<"Size :" <<count;
	cout << endl;
}

	
