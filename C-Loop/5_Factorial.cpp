#include<stdio.h>
int main(){
	int x,i,fact=1;
	printf("Enter number for factorial");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	printf("Factorial of %d is %d",x,fact);
}