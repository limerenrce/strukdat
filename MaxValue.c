#include <stdio.h>

void MaxValue(int T[], int N, int *max);

int main()
{
	int max;
	int T[] = {1, 6, 87, 12, 20};
	int N = sizeof(T)/sizeof(T[0]);
	
	MaxValue(T,N,&max);
	printf("Max = %d\n", max);
}

void MaxValue(int T[], int N, int *max)
{
	int i;
	*max = T[0];
	
	for(i=1 ; i<N ; i++){
		if(*max < T[i])
		{
			*max = T[i];
		}
	}
}
