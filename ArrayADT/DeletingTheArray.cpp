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
void Delete(struct Array *arr, int index){
	int x = arr->A[index];
	for (int i = index; i < arr->length-1; ++i)
	{
		/* code */
		arr->A[i] = arr->A[i+1];
	}
	arr->length--;

}
int main()
{
	struct Array arr = {{20,30,40,50,60},10,5};
	Display(arr);
	Delete(&arr,3);
	printf("Array Displayed after delete operation : ");
	Display(arr);
	/* code */
	return 0;
}