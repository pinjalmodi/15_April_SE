#include<stdio.h>
int main(){
	int limit,sum=0,i=1;
	printf("Enter limit");
	scanf("%d",&limit);
	while(i<=limit){
		sum=sum+i;
		i++;
	}
	printf("Sum of first %d natural numbers is %d\n",limit,sum);
	}