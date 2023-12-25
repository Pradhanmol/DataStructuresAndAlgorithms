#include<stdio.h>
#include<stdlib.h>

struct Array
{
	int A[10]; // Taking the pointer 
	int size; // sizeOfArray 
	int length; //index of all element 
	
};

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Display(struct Array arr){
	printf ("Elements are :");
	for (int i = 0; i < arr.length; ++i)
	{
		printf("\n%d\n",arr.A[i]);
		/* code */
	}
}

void ReverseArrray1(struct Array *arr){
	//BytakingAuxullaryArray 
	int *B; // for auxullary array here creating the array in heap
	int i,j; // taking to variable for itiration 
	B = (int *)malloc(arr->length*sizeof(int)); // allocating the memory in heap for size of array 
	for(int i = arr->length-1,j=0;i>=0;i--,j++){ // taking the for loop for copying the element from a to b  --> 
		//This loop is running for n-1 times
		B[j] = arr->A[i]; // copying the last element to front in array & this take time to work done is n 	
	}
	for(int i=0; i<=arr->length; i++){
		arr->A[i] = B[i]; // Again copying the element from b to a which help to gain the reverse array
	}

}
void ReverseArrray2(struct Array *arr){
	//in this function we use only for loop & swap function to reverse array 
	//without using auxillary array it means taking extra array
	for (int i = 0, j=arr->length-1; i<=j; i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);
		/* code */
	}

}

int main(){
	struct Array arr = {{20,30,40,50,60},10,5};
	ReverseArrray2(&arr);
	Display(arr);

}