#include <stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10]; // Taking the pointer 
	int size; // sizeOfArray 
	int length; //index of all element 
	
};
void Display(struct Array arr){
	printf ("Elements are :");
	for (int i = 0; i < arr.length; ++i)
	{
		printf("\n%d\n",arr.A[i]);
		/* code */
	}
}
void Append(struct Array *arr, int x){
	if(arr->length<arr->size){ // for append operation 1st we check array length is leseer than array size
		arr->A[arr->length++] = x; // if yes then we increase the size of length & use as index & assign that value in that idx
	}
}
void Insert(struct Array *arr, int index, int x){
	if(index>=0 && index<=arr->size){ // For inserting the value on user specific idx here we 
		// we first check the idx is greater than or equal to zero and idx is less than or equal to size of array 
		// if it has fall then move forward 
		for(int i=arr->length;i>index;i--){ // start shifting the idx value from length of array till the idx no. provide by user 
			arr->A[i] = arr->A[i-1]; // copy the idx value to previous one 
			// so where is the last idx gone or how to settled ?
		}
			arr->A[index] = x;
			arr->length++;
	}
}
int main()
{
	struct Array arr = {{20,30,40,50,60},10,5};
	Display(arr);
	Append(&arr, 10);
	Insert(&arr, 3, 12);
	printf("Array Displayed after append & insert operation : ");
	Display(arr);
	/* code */
	return 0;
}