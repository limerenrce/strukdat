#include <stdio.h>


int IsXExist(int T[], int N, int X);
/*Fungsi untuk mencari nilai X	dalam elemen tabel T, N banyaknya elemen tabel T, menghasilkan 1 (true) bila ada dan 0 (false) bila tidak ada*/


int main(){
	int ada,X;
	int T[] = {1, 6, 87, 12, 20};
	int N = sizeof(T)/sizeof(T[0]);
	printf("Cari elemen: ");
	scanf("%d",&X);
	
	ada = IsXExist(T,N,X);
	
	if (ada == 1)
	{
		printf("Nilai %d --> Ada\n",X);
	}
	else
	{	
		printf("Nilai %d --> Tidak Ada\n",X);
	}
}

int IsXExist(int T[], int N, int X)
{
	int ada;
	int i;
	
	ada = 0;
	i = 0;
	while ((ada != 1) && (i < N))
	{
		if (T[i] == X)
		{
			ada = 1;
		}
		else
		{
			i++;
		}
	}
	return (ada);
}
