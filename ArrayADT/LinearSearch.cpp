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
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}
// suppose if you come again then you find the value take again same time for finding 
// so here we optimize the linear search by two method 
// first one is transpostion means here swap the element with before idx value that helps to reduce time to find
// second one is move to front means here swap the element with top of idx value that helps to get the value again instant with best time complexity 
int LinearSearchOptimized(struct Array *arr, int key){
	for (int i = 0; i < arr->length; ++i)
	{
		if(key==arr->A[i]){
			swap(&arr->A[i], &arr->A[i-1]);
			return i-1;
		}
		/* code */
	}
	return -1;
}


int LinearSearch(struct Array *arr, int key){ // not optimized linear search 
	for(int i=0; i<arr->length; i++){ // run the value till the array of length form 0  -->0 to n
		if(key==arr->A[i]){  // checking the key on traversing of all index -->0 to n
			return i; // when the key value get on any idx return that idx 
		} // best case --> o(1), //worst case --> o(n) //avg case --> o(n) how ? Here, we are traversing for element like 
		// 1+2=3+..+n = n*(n+2)/2 -- (n*(n+2)/2)/n = n+2/2 --> degree of n is 1 so in avg case --> o(n) is time complexity 
	}
	return -1; //return the value as -1 if key is not get any idx 
}
int main()
{
	struct Array arr = {{20,30,40,50,60},10,5};
	Display(arr);
	printf("Array Displayed after finding Elements : ");
	int idxKeyValue = LinearSearchOptimized(&arr, 30);
	printf("%d\n",idxKeyValue);
	Display(arr);
	/* code */
	return 0;
}