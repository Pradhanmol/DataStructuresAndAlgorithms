#include <stdio.h>
#include <stdlib.h>



struct Array
{
	int *A; // Taking the pointer 
	int size; // sizeOfArray 
	int length; //index of all element 
	
};

void Display(struct Array *arr){
	printf ("Elements are :");
	for (int i = 0; i < arr->length; ++i)
	{
		printf("\n%d\n",arr->A[i]);
		/* code */
	}
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
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

int Delete(struct Array *arr, int index){
	int x = arr->A[index];
	for (int i = index; i < arr->length-1; ++i)
	{
		/* code */
		arr->A[i] = arr->A[i+1];
	}
	arr->length--;
 return x;
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


int Get(struct Array *arr,int idx){
	if(idx>=0&&idx<arr->length){
		return arr->A[idx];
	}
	return -1;
}
void Set(struct Array *arr, int idx, int value){
	if(idx>=0&&idx<arr->length){
		arr->A[idx] = value;
	}
}

int Add(struct Array *arr){
	int total = 0;
	for(int i=0; i<arr->length; i++){
		total = total + arr->A[i];
	}
	return total;
}

int main(){
	struct Array arr1;
	int x, index;
	int ch ;
	printf("Enter size of array : \n");
	scanf("%d",&arr1.size);
	arr1.A  = (int *)malloc(arr1.size*sizeof(int));
	arr1.length = 0;
	do{
		printf("\nMenu\n");
		printf("1. Insert\n");
 		printf("2. Delete\n");
 		printf("3. Search\n");
 		printf("4. Sum\n");
 		printf("5. Display\n");
 		printf("6.Exit\n");
 	printf("enter you choice ");
 	scanf("%d",&ch);

 	switch(ch)
 	{
 	case 1: printf("Enter an element which you want to insert : \n");
 		scanf("%d", &x);
 		InsertArray(&arr1,x);
 		break;
 	case 2 : printf("Enter an index which you want to Delete ? : \n");
 		scanf("%d", &index);
 		Delete(&arr1, index);
 		break;
 	case 3 : printf("Enter an element which you want Search : \n");
 		scanf("%d",&x);
 		printf("Index is %d",LinearSearch(&arr1,x));
 		break;
 	case 4 : printf("Sum af array is : %d", Add(&arr1));
 		break;
 	case 5 : printf("Array : \n");
 		Display(&arr1);
 		break;
	case 6:
	printf("Thank you for using menu driver");
 	}
 }
 while(ch>6);
 
 return 0;
}
