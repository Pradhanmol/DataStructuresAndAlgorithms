#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class Array
{
private:
	int *A;
	int size;
	int length;
public:
	Array(){
		size = 10;
		length = 6;
		A = new int[size];
	}
	Array(int sz){
		size = sz;
		length = 0;
		A = new int[size];
	}
	~Array(){
		delete []A;
	}
	void DuplicateNoInSortedArray();
	void Insert(int index, int x);
};

void Array::DuplicateNoInSortedArray(){
	int lastDuplicate = 0;
	for (int i = 0; i < length; ++i)
	{
		if (A[i]==A[i+1] && A[i]!=lastDuplicate)
		{
			cout<<A[i]<<" , ";
			lastDuplicate = A[i];
		}
	}
}

void Array::Insert( int index , int x){ // calling insert function with index & value 
 	if (index >=0 && index<=length) // checking the index value is lie under the all no. of element i.e called length
 	{
 		for (int i = length-1; i=>index; --i) // traverse the array from lenght-1 idx till the index get which has provide by user 
 		{
 			/* code */
 			A[i+1] = A[i]; // shifting the element of array till the index get after freeing the desire index 
 		}
 		/* code */
 		A[index] = x; // here me setting the value which i git from the user
 	}
 }

int main(){
	int sz;
	cout<<"Enter size of array: ";
	scanf("%d", &sz);
	Array arr1 = new Array(sz);
	cout<<"Arrays are inserting";
	arr1.Insert(0,3);
	arr1.Insert(1,8);
	arr1.Insert(2,8);
	arr1.Insert(3,10);
	arr1.Insert(4,12);
	arr1.Insert(5,15);
	arr1.Insert(6,15);
	arr1.Insert(7,15);
	arr1.Insert(8,20);
	cout<<"Dupliacte arrays are : ";
	arr1.DuplicateNoInSortedArray();
}