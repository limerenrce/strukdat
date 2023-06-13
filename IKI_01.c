#include <stdio.h>

int ArrayPalindrom(int T[], int N);

int main()
{
	int T[]={3, 5, 6, 7, 7, 6, 5, 3};
	int N = sizeof(T)/sizeof(T[0]);
	int boolean;
	int i=0;
	int j=N-1;
		
	printf("%d %d %d\n", N ,i, j);
	
	boolean=ArrayPalindrom(T,N);
	
	if(boolean==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	
}
int ArrayPalindrom(int Arr[], int N)
{
	int boolean=1;
	int i=0;
	int j=N-1;
	
	while((i<=N/2) && (boolean==1))
	{
		if(Arr[i]!=Arr[j])
		{
			boolean = boolean-1;
		}
		j--;
		i++;
		
	}
	return boolean;
}
