#include <stdio.h>

int main(){
	
}



/* Modul Tabel Integer*/

#ifndef tabel_H
#define tabel_H

/*Kamus Umum*/
#define true 1
#define false 0
#define NMax 50
typedef int TabInt[NMax];

int AddArr(TabInt A, TabInt B, TabInt C, int N);
/*Fungsi untuk menambahkan 2 elemen array yang memiliki index sama */

int ShowAddArr(TabInt A, int N);
/*Fungsi untuk menampilkan hasil penambahan elemen array*/

#endif

int AddArr(TabInt A, TabInt B, TabInt C, int N){
	int i;
	
	for(i=1;i<=N;i++){
		C[i]=A[i]+B[i];
	}
	return(TabInt C);
	
}

int ShowAddArr(TabInt A, int N){
	
}
