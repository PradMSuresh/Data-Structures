#include <iostream>

void fillArray (int* , int);
void buildMaxHeap( int* , int);
void maxHeapify ( int* , int , int );
int ksmallest( int * , int , int );

using namespace std;

int main() {
	int n ;
	
	cout <<"Enter the number of elements : " ;
	cin  >> n;
	cout <<endl;
	
	int heap_size = n - 1;
	
	int A[heap_size];
	
	fillArray(A,heap_size);
	buildMaxHeap(A, heap_size);
	
	int k , smallest;
	
	cout << "Enter the kth smallest element to find :" ;
	cin  >> k ;
	cout <<endl;
	
	smallest = ksmallest(A, k , heap_size);
	cout << "Smallest : " << smallest ;
}

int ksmallest( int A[] , int k , int heap_size)
{
	cout << " Identifying the "<< k <<" th smallest element";
	cout <<endl;
	int zero = 0;
	int n = heap_size - k;
	
	for ( int i =0 ; i <= n ; i++ )
	{
		A[zero] = A[heap_size];
		heap_size = heap_size - 1;
		maxHeapify(A , zero , heap_size);  
		cout << " A[0] :" <<A[0] <<endl; 
	}
	
	return A[zero];
}
void fillArray ( int A[] , int heap_size)
{
	for ( int i=0 ; i <= heap_size  ; i++ )
	{
		cout <<"Enter the "<<i+1 <<" element :" ;
		cin  >>A[i];
		cout <<endl;
	}
}

void buildMaxHeap( int A[], int heap_size)
{
	cout <<"Building Max Heap ..." << endl;
	for ( int i = heap_size/2 ; i<= 0; i--)
	{
		maxHeapify( A , i , heap_size);
	}
}

void maxHeapify( int A[] , int index , int heap_size)
{
	int l = 2*index + 1;
	int r = 2*index + 2;
	
	int largest ;
	
	if ( (l <= heap_size ) && ( A[l] > A[index] ) )
		largest = l;
		else
		largest = index;
		
	if ( (r <= heap_size ) && ( A[r] > A[largest]) )
		largest = r;
		
	if ( largest != index )
		{swap(A[largest] , A [index]);
		maxHeapify( A , largest , heap_size);
		}
}
