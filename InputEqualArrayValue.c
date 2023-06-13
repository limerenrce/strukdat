#include <stdio.h>

int InputEqualArrayValue(int T[], int N, int X);

int main()
{
	int i, X, count;
	int T[] = {1,2,3,7,7,7,8,1,2};
	int size = sizeof(T)/sizeof(T[0]);
	
	printf("Cari elemen: ");
	scanf("%d",&X);
	
	count = InputEqualArrayValue(T,size,X);
	
	if(count==0){
		printf("no entri equal to %d", X);
	}else{
		printf("%d entri/s equal to %d", count,X);
	}
}
int InputEqualArrayValue(int T[], int N, int X)
{
	int i;
	int count;
	
	i=0;
	count=0;
	for(i=0 ; i<N ; i++)
	{
		if(T[i]==X)
		{
			count++;
		}
	}
	return (count);
}
