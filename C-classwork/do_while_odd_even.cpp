#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter last number till user wants to print\n");
	scanf("%d",&n);
		do{
	if(i%2==0){

		printf("\n%d is even",i);
}
	else 
	{printf("\n%d is odd",i);
	}
	i++;
	}
	while(i<=n);
	printf("\n");
}