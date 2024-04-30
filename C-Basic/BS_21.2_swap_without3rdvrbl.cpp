#include<stdio.h>
int main(){
	int a,b;
	printf("Enter values for a & b\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped values of a and b are %d and %d",a,b);
}