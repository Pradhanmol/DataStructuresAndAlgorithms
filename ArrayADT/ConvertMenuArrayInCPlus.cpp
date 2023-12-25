#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct Array { // defined the structure of array 
	int *A; // containing a pointer for pointing an dynamic array 
	int size; // size of array  
	int length; // length of array 
	// above these are the data members of struct array 
};

// then we have written a various function of array 

// all those function of prototype available below & follwed by the function definition are available below prototype 

// c lang are more related to the procedure or logic where as c++ is more related to desgining or organizing the code 
 
 void Display(struct Array arr);
 void Append(struct Array *arr, int x);
 void Insert(struct Array *arr, int index, int x);
 void swap(int *x, int *y);
 int LinearSearch(struct Array *arr, int key);
 int BinarySearch(struct Array *arr, int key);
 int RcBinarySearch(struct Array *arr, int low; int high; int key);
 int Get(struct Array arr, int index);
 void Set(struct Array *arr, int index, int x);
 int Max(struct Array arr);
 int Min(struct Array arr);
 float Avg(struct Array arr);
 void ReverseArrray(struct Array *arr);
 void InsertSort(struct Array *arr, int x);
 int IsSort(struct Array arr);
 void ReArrange(struct Array *arr);
 struct Array* Merge(struct Array *arr1, struct Array *arr2);
 struct Array* Union(struct Array *arr1, struct Array *arr2);
 struct Array* Intersection(struct Array *arr1, struct Array *arr2);
 struct Array* Difference(struct Array *arr1, struct Array *arr2);

 void Display(struct Array arr){ 
 	for (int i = 0; i < arr->length; ++i)
 	{
 		printf("%d", arr->A[i]);
 		/* code */
 	}
 }

 void Append(struct Array *arr, int x){
 	if (arr->length<arr->size) // checking the size array is less than no. of element in array it check space that i apppend on element or not 
 	{
 		arr->A[arr->length++] = x;
 		/* code */
 	}
 }

 void Insert(struct Array *arr, int index , int x){ // calling insert function with index & value 
 	if (index >=0 && index<=arr->length) // checking the index value is lie under the all no. of element i.e called length
 	{
 		for (int i = arr->length-1; i=>index; --i) // traverse the array from lenght-1 idx till the index get which has provide by user 
 		{
 			/* code */
 			arr->A[i+1] = arr->A[i]; // shifting the element of array till the index get after freeing the desire index 
 		}
 		/* code */
 		arr->A[index] = x; // here me setting the value which i git from the user
 	}
 }
 
 void swap(int *a, int *b){
 	int temp = *a;
 	*a = *b;
 	*b = temp;
 }

int LinearSearch(struct Array *arr, int key){
	for (int i = 0; i < arr->length-1; ++i)
	{
		/* code */
		if (key==arr->A[i])
		{
			swap(&arr[i+1],&arr[i]);
			return i;
			/* code */
		}
	}
	return -1;
}

int BinarySearch(struct Array *arr, int key){
	int low =0, high = arr->length-1, mid; // intialize all the value with thier respective usage
	while(low<=high){ // run this loop till low <=high
		mid = (low+high)/2; // find median
		if (arr->A[mid]==key) // fetching the mid value & check it was key then return the idx
		{
			return mid;
		}
		else if(key>arr->A[mid]){ // if finding key value is greater than mid value then set the low as mid + 1 or if less then mid then set high as mid-1;
			low = mid+1;
		}else {
			high = mid-1;
		}
	}
	return -1;
}

int RecBinarySearch(struct Array *arr, int low, int high, int key){
	while(low<=high){
		mid = (low+high)/2;
		if(key==arr->A[mid]){
			return mid;
		}
		else if(key<arr->A[mid]){
			return RecBinarySearch(arr, low, mid-1, key); 
		}else{
			return RecBinarySearch(arr, mid+1, high, key);
		}
	}
	return -1
}


int Get(struct Array arr, int index){
	if (index>=0 && index<arr->length)
	{
		return arr->A[index];
		/* code */
	}
	return -1;
}
 void Set(struct Array *arr, int index, int x){
 	if (index>=0 && index<arr->length)
 	{
 		return arr->A[index] = x;
 	}
 	return -1;
 }
 int Max(struct Array arr){
 	int max = arr->A[0]
 	for (int i = 1; i < arr->length-1; ++i)
 	{
 		/* code */
 		if (max<arr->A[i])
 		{
 			/* code */
 			max = arr->A[i];
 		}
 	}
 	return max;
 }
 int Min(struct Array arr){
 	int min = arr->A[0];
 	for (int i = 1; i < arr->length; ++i)
 	{
 		if (min>arr->A[i])
 		{
 			min = arr->A[i];
 			/* code */
 		}
 		/* code */
 	}
 	return min;
 }
 float Avg(struct Array arr){
 	int sum = 0;
 	for (int i = 0; i < arr->length; ++i)
 	{
 		sum = sum + arr[i];
 		/* code */
 	}
 	return sum/arr->length;
 }
 void ReverseArrray(struct Array *arr){
 	for (int i = 0, j = arr->length-1;i<=j; i++,j--)
 	{
 		swap(&arr->A[i],&arr->A[j]);
 	}
 }
 void InsertSort(struct Array *arr, int insertingValue){ //insert element in sorted manner
 	int i = arr->length-1 // intializing array with value length-1 of array
 	if(arr->size==arr->length){ //checking the space is available in array that we are located in heap
 		return "Array out of bound exception";
 	}
 	if (arr->A[i]>insertingValue) // checking the value at index is greater than inserting value 
 	{
 		arr[i+1] = arr[i]; // then shift that value to i+1 index
 		i--; // for running loop decrement the i --
 		/* code */
 	}
 	arr[i+1] = insertingValue; // if value is greater than index value then we place the i+1 index
 	arr->length++; // after placing the value update the length too;
 }
 int IsSort(struct Array arr){
 	for (int i = 0; i < arr->length-1; ++i)
 	{
 		if (arr->A[i]>arr->A[i+1])
 		{
 			return false;
 		}
 		/* code */
 	}
 	return true;
 }
 void ReArrange(struct Array *arr){

 }
 struct Array* Merge(struct Array *arr1, struct Array *arr2){
 	
 }
 struct Array* Union(struct Array *arr1, struct Array *arr2);
 struct Array* Intersection(struct Array *arr1, struct Array *arr2);
 struct Array* Difference(struct Array *arr1, struct Array *arr2);