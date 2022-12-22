#include<stdlib.h>
#include <stdio.h>


struct Array {
	int A[10];
	int size;
	int length;
};
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

int Max(struct Array *arr){
	int max = arr->A[0];
	for(int i=1; i<arr->length; i++){
		if(arr->A[i]>max){
			max = arr->A[i];
		}
	}
	return max;
}

int Min(struct Array *arr){
	int min = arr->A[0];
	for(int i=1; i<arr->length; i++){
		if(arr->A[i]<min){
			min = arr->A[i];
		}
	}
	return min;
}

int Add(struct Array *arr){
	int total = 0;
	for(int i=0; i<arr->length; i++){
		total = total + arr->A[i];
	}
	return total;
}

double Avg(struct Array *arr){
	int total = 0;
	for(int i=0; i<arr->length; i++){
		total = total + arr->A[i];
	}
	return total/arr->length;
}
int main(){
	struct Array arr={{27,39,43,53,61},10,5};
	printf("Geting the indx value : %f\n",Avg(&arr));
}