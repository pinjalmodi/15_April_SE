#include<stdio.h>
int main(){
	int x,n=1;
	printf("Enter the table to print");
	scanf("%d",&x);
	while(n<=10){

	printf("%d * %d = %d",x,n,x*n);
	n++;
}
}