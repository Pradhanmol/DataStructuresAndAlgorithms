#include<stdio.h>
#include <stdlib.h>

struct Array {
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr){
	printf("Elements are : ");
	for(int i=0;i<=arr.length;i++){
		printf("\n%d\n",arr.A[i]);
	}
}

struct Array* Union(struct Array *arr1, struct Array *arr2){
	int i,j,k; // here taking three pointers 
	i=j=k=0; //intialize with 0 to all variables 
	struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array)); 
	//assigning the memory in heap to the pointer which has decalare into main fun
	while(i<arr1->length&&j<arr2->length){ // here comparing the length of both variables from  0 to length
		if (arr1->A[i]<arr2->A[j]) //here comparing the variables the 
		{
			arr3->A[k++] = arr1->A[i++];
			/* code */
		}else if (arr1->A[i]>arr2->A[j]){
			arr3->A[k++] = arr2->A[j++];
		}
		else{
			arr3->A[k++] = arr1->A[i++];
			j++;
		}
	}
	for(;i<arr1->length;++i)
	{
		arr3->A[k++] = arr1->A[i];
	}
	for (;j < arr2->length; ++j)
	{
		arr3->A[k++] = arr1->A[j];
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}


struct Array* Intersection(struct Array *arr1, struct Array *arr2){
	int i,j,k;
	i=j=k=0;
	struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
	while(i<arr1->length&&j<arr2->length){
		if (arr1->A[i]<arr2->A[j])
		{
			i++;
			/* code */
		}else if (arr1->A[i]>arr2->A[j]){
			j++;
		}
		else{
			arr3->A[k] = arr1->A[i++];
			k++;
		}
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

struct Array* Difference(struct Array *arr1, struct Array *arr2){ // A-B here anly takes the value which are not present in B & exclued all of them 
	int i,j,k;
	i=j=k=0;
	struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
	while(i<arr1->length&&j<arr2->length){
		if (arr1->A[i]<arr2->A[j])
		{
			arr3->A[k++] = arr1->A[i++];
			/* code */
		}else if (arr1->A[i]>arr2->A[j]){
			j++;
		}
		else{
			i++;
			j++;
		}
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

struct Array* DifferenceRev(struct Array *arr1, struct Array *arr2){ // B-A here anly takes the value which are not present in B & exclued all of them 
	int i,j,k;
	i=j=k=0;
	struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
	while(i<arr1->length&&j<arr2->length){
		if (arr1->A[i]<arr2->A[j])
		{
			i++;
			/* code */
		}else if (arr1->A[i]>arr2->A[j]){
			arr3->A[k++] = arr1->A[j++];
		}
		else{
			i++;
			j++;
		}
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

int main(){
	//keyWord //tag/structTag //variable = //intialize with mem or properties that you are defined in structure 
	struct Array arr1={{2,9,21,28,35},10,5};
	struct Array arr2={{2,3,9,18,28},10,5};
	struct Array *arr3;
	arr3 = DifferenceRev(&arr1,&arr2);
	Display(*arr3);

}