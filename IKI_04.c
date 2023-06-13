#include <stdio.h>
#include <stdbool.h>

bool HAHA(int T[], int N);

int main()
{
	int T[] = {1, 4, 7, 8, 5, 16, 6, 30, 0};
	int N = sizeof(T) / sizeof(T[0]);
	bool setengah;

	setengah = HAHA(T, N);

	if (setengah == true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}

bool HAHA(int T[], int N)
{
	int i;
	bool setengah;

	setengah = true;
	if (N % 2 == 0)
	{
		for (i = 0; i < N - 2; i++)
		{
			if (i % 2 == 1)
			{
				printf("%d ", i);
				printf("%d ", T[i] * 2);
				printf("%d ", T[i + 2]);
				if ((T[i]) != (T[i + 2] / 2))
				{
					setengah = false;
					break;
				}
				printf("\n");
			}
		}
	}
	else if (N % 2 == 1)
	{
		for (i = 0; i < N - 2; i++)
		{
			if (i % 2 == 1)
			{
				printf("%d ", i);
				printf("%d ", T[i] * 2);
				printf("%d ", T[i + 2]);
				if ((T[i]) != (T[i + 2] / 2))
				{
					setengah = false;
					break;
				}
				printf("\n");
			}
		}
	}
	return setengah;
}
