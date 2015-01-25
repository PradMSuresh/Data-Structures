
#include <iostream>

using namespace std;

void fillArray(int*, int )
void printArray(int*,int)
void maxHeapify( int * , int , int )
void buildMaxHeap(int * , int )
void heapSort ( int * , int)

int main () {
	
	int size;
	
	cout << "Enter the number of elements in the heap :"
	cin  >> size;
	cout << endl;
	
	int A[size];
	
	int heap_size = size - 1;
	
	fillArray (A,heap_size){
		for ( int i= 0 ; int <= heap_size ; i++)
		{
			cout << " Enter the " << i+1 << " element : " ; 
			
	
