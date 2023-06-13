#include <stdio.h>
#include <stdbool.h>

bool CountTwice(int T[], int N, int X);

int main()
{
	int i, X;
	bool twice;
	int T[] = {3, 4, 1, 1, 2};
	int size = sizeof(T) / sizeof(T[0]);

	printf("Cari elemen: ");
	scanf("%d", &X);

	twice = CountTwice(T, size, X);

	if (twice = true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}

bool CountTwice(int T[], int N, int X)
{
	int i;
	int count;
	bool twice;

	twice = true;
	count = 0;
	for (i = 0; i < N; i++)
	{
		if (T[i] == X)
		{
			count++;
			if (count != 2)
			{
				twice = false;
			}
		}
	}
	return twice;
}
