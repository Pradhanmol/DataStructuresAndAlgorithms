#include<stdio.h>
#include<stdlib.h>


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

void MergeArray(struct Array *arr1, *arr2){
	int i,j,k = 0;
	Array *arr3 = ()

}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
struct	Array arr1 = {{3,8,16,20,25},10,5};
struct  Array arr2 = {{4,10,12,22,23},10,5};



}