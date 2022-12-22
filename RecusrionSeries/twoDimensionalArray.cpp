#include<stdio.h>
#include<stdlib.h>
int main(){
	int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; //created inside in stack ;
	int *B[3]; //array of pointers will created inside stack
	int i, j;

	for(int i = 0; i<3; i++){
		for (int j = 0; j < 4; j++)
		{
			printf("%d",A[i][j]);
			/* code */
		}
		printf("\n");
	}
	//so for each location create array inside heap & assign it 
	B[0] = new int[4];
	B[1] = new int[4];
	B[2] = new int[4];

	int **C; // double pointer variable is created in stack ;
	C = new int[3]; //the array created inside a heap 
	C[0] = new int[4]; // for each array created new array inside heap;
	C[1] = new int[4];
	C[2] = new int[4];	



	return 0;
 }