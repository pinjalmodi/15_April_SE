#include<stdio.h>
int main(){
	int limit,n,i;
	printf("Enter the max limit");
	scanf("%d",&limit);
	printf("Enter number to divide");
	scanf("%d",&n);
	while(i<=limit){
		if(i%n==0){
			printf("%d",i);
		}
		i++;
	}
}
