#include <stdio.h>
#include <stdlib.h>

struct Array {
	int A[10];
	int size;
	int length;
};

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void NegativeRightSide(struct Array *arr){
	int i = 0;
	int j = arr->length-1;
	while(i<j){ // this will run till the right side index is not get greater than from left side 
		while(arr->A[i]<0){ // this increase the value from & if get any positive no. then get pause
		i++;
	}
	while(arr->A[j]>=0){ // this will get decrease the value from right side & if get any negative then it was pause that time
		j--;
	}
	if(i<j){ // this condition validate the index i < j is mandate because if
	// you want to shift all the negative element on right side 
	// 
		swap(&arr->A[i],&arr->A[j]); 
	}
	}
	
}

void InsertArray(struct Array *arr, int insertingValue){
	int i = arr->length-1;
	if(arr->length==arr->size){
		return;
	}
	while(arr->A[i]>insertingValue){
		arr->A[i+1] = arr->A[i];
		i--;
	}
	arr->A[i+1] = insertingValue;
	arr->length++;
}

bool IsSortArray(struct Array *arr){
	for (int i = 0; i < arr->length-1; ++i)
	{
		if (arr->A[i]>arr->A[i+1])
		{
			return false;
			/* code */
		}
		/* code */
	}
	return true;
}

void Display(struct Array arr){
	printf ("Elements are :");
	for (int i = 0; i < arr.length; ++i)
	{
		printf("\n%d\n",arr.A[i]);
		/* code */
	}
}

int main(){
struct	Array arr = {{2,3,6,5,7,8,9},10,7};
struct  Array arr1 = {{-6,-4,2,-7,5,-7,-9},10,7};
//InsertArray(&arr, 4);
//printf("Array is sorted : %d\n", IsSortArray(&arr));
printf("Array is shifted all the negative no. one sided : \n");
NegativeRightSide(&arr1);
Display(arr1);
}