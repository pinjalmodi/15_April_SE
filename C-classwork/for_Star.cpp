#include<stdio.h>
int main(){
	int x,i,j;
	printf("Enter value for x");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
	printf("\n");
	}
	
}