#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter values for a and b");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("Swapped values of a & b are %d and %d",a,b);
	}