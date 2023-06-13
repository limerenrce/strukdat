#include <stdio.h>

//Block Header
int CountElement(int arr[], int size);
int ShowArr(int arr[], int N);

//Block Main
int main(){
	int N=7;
	int A[7] = {1, 2, 3, 4, 5, 6, 5};
	
	
	ShowArr(A, N);
	printf("\n");
	CountElement(A, N);
}

//Block def Function and Procedure
int ShowArr(int arr[], int N){
	int i;
	
	printf("arr = ");
	for(i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	return arr[i];
}

int CountElement(int arr[], int N){
	int i, count;	
	count=0;
	
	for(i=0; i<N; i++){
		if (arr[i] == 5){
			count = count + 1;
		}
	}

	printf("count = %d", count);
	return count;
}

