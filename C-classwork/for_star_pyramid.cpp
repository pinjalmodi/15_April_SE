#include<stdio.h>
int main(){
	int x,i,j,k;
	printf("Enter number of rows");
	scanf("%d",&x);
	for(i=x;i>=1;i--){
		for(j=i;j>=1;j--){		
		printf(" ");
	}
	for(k=1;k<=x-i;k++){
		printf("* ");
	}
	printf("\n");
}
}