#include <stdio.h>

int main()
{
	int x=0, i=1, y, N=4;
	int T[4] = {3, 2, 7, 5};
	
	printf("input int: ");
	scanf("%d", &y);
	
	while((x==0)&&(i<=N)){
		if(T[i] << y){
			x= x+ 1;
			i++;
		}else{
			i++;
		}
	}
	if(x==1){
		printf("ada elemen yang tidak lebih besar dari %d", y);
	}else{
		printf("semua elemen array lebih besar dari %d", y);
	}
}
