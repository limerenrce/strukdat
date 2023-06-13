#include <stdio.h>

//Block Header
int InputArr(int arr[], int N);
/*Fungsi untuk menginput array*/
void SwapArr(int arr[], int N);
/*Prucedure untuk swap array*/
int OutputArr(int arr[], int N);
/*Procedure untuk menampilkan output array setelah swap*/

//Block Main
int main(){
	int i;
	int N;
	int A[N];
	
	printf("input jumlah elemen array: ");
	scanf("%d", &N);
	
	InputArr(A, N);
	printf("\n");
	SwapArr(A, N);
	OutputArr(A, N);	
}

//Block Def of Function & Procedure
int InputArr(int arr[], int N){
	int i;
	
	for(i=0; i<N; i++){
		printf("Input element-%d: ",i);
		scanf("%d",&arr[i]);
	}
}

void SwapArr(int arr[], int N){
	int i, j, temp;
	j = N-1;
	temp = 0;
	
	for(i=0; i<N/2 ;i++){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
	}
}

int OutputArr(int arr[], int N){
	int i;
	
	printf("Arr = ");
	for(i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
}
