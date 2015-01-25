#include <iostream>

using namespace std ;

void fillArray(int* , int);
void buildmaxHeap(int * , int);
void maxHeapify(int *, int ,int );
void printHeap ( int* , int );
void heapSort(int* , int);

int main () {
	int n;
	
	cout << " Enter the number of elements in the Heap :" ;
	cin >> n;
	
	int input[n];
	fillArray(input , n);
	
	int heapSize = sizeof(input)/sizeof(int) ;
	
	heapSort(input , heapSize);
	
	printHeap(input , heapSize);
	
		}

void fillArray(int input[] , int n){
	for (int i =0; i < n ; i++)
	{
		cout << "Enter the " << i + 1<< " element :" ;
		cin >> input[i];
		cout << endl;
	}
}


void heapSort(int input[] , int heapSize) {
	buildmaxHeap(input , heapSize); 
	int zero = 0;
	for ( int i = heapSize - 1 ; i >= 1 ; i--){
		swap(input[zero] ,input [i]);
		heapSize = heapSize - 1;
		maxHeapify(input , zero , heapSize);
	}
}	
	
void maxHeapify( int input[] , int index , int heapSize) {

	
	int l =   2*index+1 ;
	int r =   2*index+2 ;
	
	int largest;
	
	cout << " l : " << l ;
	cout << " r : " << r ;
	cout << endl; 
	

	if ( (l < heapSize) && (input[l] > input [index]))
		largest = l;
		else
		largest = index;
		
	if ( (r<heapSize) && (input[r] > input [largest]))
		largest = r;
		
	if ( largest != index )
		{
			swap (input[largest] , input[index]);
			maxHeapify( input , largest , heapSize);
		}
	
	
}

void buildmaxHeap(int input[] , int heapSize){
	cout <<" Building Max Heap ... " << endl;
	for ( int i = heapSize/2 ; i >= 0 ; i--){
			maxHeapify(input , i , heapSize);
	}
}	

void printHeap(int input[] , int heapSize){
	for (int i =0 ; i < heapSize ; i++)
	{
		cout << i << " : " << input[i] << endl;
	} 
}		
		
		

