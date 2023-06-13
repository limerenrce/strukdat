#include <stdio.h>

//Block Header
int AddArr(int arr1[], int arr2[], int arr3[], int N);
/*Fungsi untuk menambahkan 2 elemen array yang memiliki index sama */

int ShowAddArr(int arr[], int N);
/*Fungsi untuk menampilkan hasil penambahan elemen array*/


//Block Main
int main(){
	int i, N = 5;
	int A[N] = {1, 2, 3, 4, 5};
	int B[N] = {6, 7, 8, 9, 10};
	int C[N];
	
	//print A
	ShowAddArr(A, N);
	
	//print B
	printf("\n");
	ShowAddArr(B, N);
	
	//Add
	AddArr(A, B, C, N);
	
	//print
	printf("\n");
	ShowAddArr(C, N);
}

//Block Def of Function & Procedure
int AddArr(int arr1[], int arr2[], int arr3[], int N){
	int i;
	
	for(i=0;i<N;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	return(arr3[N]);
}

int ShowAddArr(int arr[], int N){
	int i;
	
	printf("Arr = ");
	for(i=0;i<N;i++){
		printf("%d ", arr[i]);
	}
}
