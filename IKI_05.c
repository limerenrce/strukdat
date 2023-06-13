#include <stdio.h>

int PosisiMin(int T[], int N, int *min);

int main()
{
	int T[]={1,4,7,5,10,1,20};
	int N = sizeof(T)/sizeof(T[0]);
	int min=T[0];
	int pos;
	
	pos = PosisiMin(T,N,&min);
	
	printf("%d\n", min);
	if(pos%2==0)
	{
		printf("Genap");
	}
	else
	{
		printf("Ganjil");
	}
}

int PosisiMin(int T[], int N, int *min)
{
	int i;
	int pos;
	
	pos=0;
	*min = T[0];
	i=0;
	for(i=0; i<N; i++)
	{
		if(*min>=T[i])
		{
			*min=T[i];
			pos=i;
		}
	}
	return pos+1;
}
