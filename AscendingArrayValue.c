#include <stdio.h>

int check(int T[], int N);

int main(){
	int T[] = {1,2,4,5,7};
	int n = sizeof(T)/sizeof(T[0]);
	int count;
	
	printf("check array : ");
	
	count = check(T, n);
	
	if (count==1){
		printf("ascending");
	}else{
		printf("non-ascending");
	}
}

int check(int T[], int N){
	int i, count=1;
	
	for(i=1 ; i<N ; i++)
	{
		if(T[i-1]>T[i])
		{
			count = count - 1;
			break;
		}
	}
	return(count);
	/*while((array[i-1]<array[i])&&(i<=N)){
		if(array[i-1]>array[i]){
			count++;
			return count;
		}
		return count;
		i++;
	}*/
}
