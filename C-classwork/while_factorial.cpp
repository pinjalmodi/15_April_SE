#include<stdio.h>
int main(){
	int i,n,fact=1;
	printf("Enter value");
	scanf("%d",&n);
	i=n;
	while(i>=1){
		fact=fact*i;
		i--;
	}
	printf("Factorial is %d",fact);
}