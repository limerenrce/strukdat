#include <stdio.h>

//Block Header
int SumElement(int arr[], int N);
int ShowArr(int arr[], int N);

//Block Main
int main(){
	int N=5;
	int A[5] = {1, 2, 3, 4, 5};
	
	ShowArr(A, N);
	SumElement(A, N);

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

int SumElement(int arr[], int N){
	int i, sum=0;
	
	for(i=0; i<N; i++){
		sum = arr[i] + sum;
	}
	printf("\nsum = %d", sum);
	
	return sum;
}

