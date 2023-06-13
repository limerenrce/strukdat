#include <stdio.h>

int Muncul(int T[], int N, int X);
int Posisi(int T[], int N, int X);

int main()
{
	int i, X, count, posisi;
	int T[] = {1, 4, 4, 1, 1};
	int size = sizeof(T) / sizeof(T[0]);

	printf("Cari elemen: ");
	scanf("%d", &X);

	count = Muncul(T, size, X);
	posisi = Posisi(T, size, X);

	if (count < 3)
	{
		if (count == 0)
		{
			printf("angka %d tidak ada yang muncul", X);
		}
		else if (0 < count < 3)
		{
			printf("angka %d hanya muncul %d kali", X, count);
		}
	}
	else
	{
		printf("angka %d yang  %d ketiga muncul pada elemen ke-%d", X, count, posisi);
	}
}

int Muncul(int T[], int N, int X)
{
	int i;
	int count;

	count = 0;
	for (i = 0; i < N; i++)
	{
		if (T[i] == X)
		{
			count++;
		}
	}
	return count;
}

int Posisi(int T[], int N, int X)
{
	int i;
	int poss;
	int count;

	poss = 0;
	count = 0;
	for (i = 0; i <= N; i++)
	{
		if (T[i] == X)
		{
			count++;
			if (count == 3)
			{
				poss = i;
			}
		}
	}
	return poss + 1;
}
