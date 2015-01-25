#include <iostream>

using namespace std ;

void fillArray(int* , int);
int heapMin(int*);
int heapExtractMin(int* , int);
void heapDecreaseKey(int* , int , int );
int parent ( int );
void minHeapInsertkey(int* , int );
void minHeapify( int* , int , int );
void printHeap( int * , int );
void buildminHeap(int* , int);

int main(){
	int size;
	//int position;
	
	cout << " Enter the number of elements in the Heap :" ;
	cin >> size;
	
	int heap_size = size -1 ;
	
	int input[heap_size];
	fillArray(input , heap_size);
	
	printHeap(input , heap_size);
	
	buildminHeap(input , heap_size);
	/*printHeap(input , heap_size);
	
	cout << "Enter the position of the key whose value you would like to reduce : " ;
	cin  >> position ;
	cout << endl;
	heapDecreaseKey( input , position , heap_size );
	
	printHeap(input , heap_size);*/
	
	minHeapInsertkey(input , heap_size);
	
	
	
}

void buildminHeap(int input[] , int heap_size){
	cout <<" Building Min Heap ... " << endl;
	for ( int i = heap_size/2 ; i >= 0 ; i--){
			minHeapify(input , i , heap_size);
	}
}	

void printHeap(int input[] , int heap_size){
	for (int i =0 ; i <= heap_size ; i++)
	{
		cout << i << " : " << input[i] << endl;
	} 
}
void minHeapify( int input[] , int index , int heap_size ) {
	int l = 2*index + 1 ;
	int r = 2*index + 2 ;
	int smallest ;
	
	if ( ( l < heap_size ) && (input[l] < input [index] ) )
		smallest = l ;
		else
		smallest = index;
	
	if ( ( r <heap_size) && (input [r] < input [smallest] ) )
		smallest = r ;
		
	if ( smallest != index )
		{
			swap( input [smallest] , input [index] );
			minHeapify( input, smallest , heap_size);
		}
}
	
	
	
void minHeapInsertkey( int input[] , int heap_size){
	heap_size = heap_size + 1;
	input[heap_size] = -1;
	heapDecreaseKey( input , heap_size , heap_size);
}
	
				
int parent ( int index) {
	return (index-1)/2 ;
}

void heapDecreaseKey(int input[], int index , int heap_size){
	int key;
	cout << " Enter the new key value :" ;
	cin >> key ;
	cout << endl;
	cout <<" Index :" <<index ;
	input [ index ] = key ;
	while ( (index > 0) && (input[parent( index )] > input[index])){
		swap( input[index] , input[parent(index)]);
		index = parent(index);
	}
	
	printHeap(input , heap_size);
	
}


int heapExtractMin(int input[] , int heap_size){
	int zero = 0;
	int min = input[zero];
	input[zero] = input[heap_size];
	heap_size = heap_size - 1;
	minHeapify( input , zero , heap_size);
	return min;
}

int heapMin(int input[]){
	return input[0];
}

void fillArray(int input[] , int heap_size){
	for (int i =0; i <= heap_size ; i++)
	{
		cout << "Enter the " << i + 1<< " element :" ;
		cin >> input[i];
		cout << endl;
	}
}

