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
int BinarySearch(struct Array *arr, int findingKey){
	int low = 0, high = arr->length-1, mid;
	while(low<=high){
		mid=(low+high)/2;
		if(findingKey==arr->A[mid]){
			return mid;
		}else if(findingKey<arr->A[mid]){
			
			high = mid-1;
		}else {
			low = mid+1;
		}
		}
		return -1;
	}

int RcBinarySearch(struct Array *arr, int low, int high, int findingKey){
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		if(findingKey==arr->A[mid]){
			return mid;
		}else if(findingKey<arr->A[mid]){
			return RcBinarySearch(arr,low,mid-1,findingKey);
		}
		return RcBinarySearch(arr,mid+1,high,findingKey);
		}
		return -1;
	}
int main()
{
	struct Array arr = {{20,30,40,50,60},10,5};
	printf("Array Displayed after binary search operation on elements : ");
	int binaySearchValue = BinarySearch(&arr, 60);
	printf("BinarySearch Value : %d\n",binaySearchValue);
	printf("Recursive binary search value : %d\n", RcBinarySearch(&arr,0,arr.length-1,40));
	/* code */
	return 0;
}