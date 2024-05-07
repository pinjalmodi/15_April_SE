#include<stdio.h>
int main(){
	int x,i,j;
	printf("Enter number");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		for(j=1;j<=i;j++)
		if(j%2==0){
			printf("0");
		}
		else{
			printf("1");
		}
		printf("\n");
	}
}