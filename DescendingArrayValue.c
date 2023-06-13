#include <stdio.h>

void DescendingArrayValue(int T[], int N, int *count);

int main()
{
	int count;
	int T[] = {2,5,3,2,1};
	int n = sizeof(T)/sizeof(T[0]);
	
	DescendingArrayValue(T,n,&count);
	
	if(count==1)
	{
		printf("This array is descending");
	}
	else
	{
		printf("This array is not descending");	
	}
}

void DescendingArrayValue(int T[], int N, int *count)
{
	int i;
	
	*count = 1;
	i = 1;
	
	for(i=1 ; i<=N ; i++)
	{
		if((T[i-1]<T[i]))
		{
			*count = *count - 1;
			break;
		}
	}
	/*while((T[i-1]>T[i])&&(i<=N))
	{
		if((T[i-1]<T[i]))
		{
			*boolean = boolean - 1;
		}
		else
		{
			i++;
		}
	}*/
}
