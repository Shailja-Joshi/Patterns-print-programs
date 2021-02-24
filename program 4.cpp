#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		for(j=n;j>i;j--)
		{
			printf("*");
		}
			printf("\n");
		}
}

/*
5
    1
   12
  123
 1234
12345

*/
