#include <stdio.h>

int DetermineSameValue(int T[], int N);

int main(){
	int count;
	int T[] = {5,5,5,5,5};
	int N = sizeof(T)/sizeof(T[0]);
	
	count = DetermineSameValue(T,N);
	
	if(count==1)
	{
		printf("Array have same value");
	}
	else
	{
		printf("Array does not have same value");
	}
	
}

int DetermineSameValue(int T[], int N)
{
	int i, count = 1;
	//int i = 1;
	
	for(i=1 ; i<N ; i++)
	{
		if(T[i-1]!=T[i])
		{
			count = count - 1;
			break;
		}
	}
	return(count);
	
	/*while((T[i-1]==T[i])&&(i<N))
	{
		if(T[i-1]!=T[i])
		{
			count = count - 1;
		}
		i++;
	}
	return(count);*/
}
