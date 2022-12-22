#include <stdio.h>
#include<stdlib.h>

struct Array
{
	int *A; // Taking the pointer 
	int size; // sizeOfArray 
	int length; //index of all element 
	
};
void Display(struct Array arr){
	printf ("/n Elements are : /n");
	for (int i = 0; i < arr.length; ++i)
	{
		printf("%d",arr.A[i]);
		/* code */
	}
}
int main()
{
	int n; 
	struct Array arr;
	printf("Enter the size of Array : ");
	scanf("%d", &arr.size); //taking the size of array from user
	arr.A = (int *)malloc(arr.size*sizeof(int)); // malloc function is help to allocating the memory in heap of whatever size of data type 
	arr.length = 0; //taking the intial length is zero 

	printf("Enter how many no. you want ? ");
	scanf("%d",&n); // taking the input of how many no.'s he want to store in array'
	printf("Enter the element of Array : ");
	for (int i = 0; i<n; i++){
		scanf("%d",&arr.A[i]); //taking the no. from user which he wants to be store in array
	}
	arr.length = n;

	Display(arr);
	/* code */
	return 0;
}