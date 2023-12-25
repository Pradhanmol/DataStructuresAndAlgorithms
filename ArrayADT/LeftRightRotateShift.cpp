#include<stdlib.h>
#include <stdio.h>
struct Array {
	int A[10];
	int size; 
	int length;
};

void Display(struct Array arr){
	printf ("Elements are :");
	for (int i = 0; i < arr.length; ++i)
	{
		printf("\n%d\n",arr.A[i]);
		/* code */
	}
}

void LeftShift(struct Array *arr){
	
	for(int i = 0; i < arr->length; ++i)
	{	
		arr->A[i] = arr->A[i+1];
		/* code */
	}
	
}

void LeftShiftRotate(struct Array *arr){
	int j = 0;
		while(j<=arr->length-1){
		int temp = arr->A[0]; // taking the copy of first variable in temp then left shift
		for (int i = 0; i < arr->length; ++i)
		{
			arr->A[i] = arr->A[i+1];
		/* code */
		}
		arr->A[arr->length-1] = temp;
		j++;
	}
	j = 0;
}

int main()
{
	struct Array arr = {{20,30,40,50,60,70},10,5};
	LeftShiftRotate(&arr);
	Display(arr);

}