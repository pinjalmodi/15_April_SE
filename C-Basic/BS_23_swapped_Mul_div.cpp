#include<stdio.h>
int main(){
	int a,b;
	printf("Enter value for a and b\n");
	scanf("%d %d",&a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("Swapped values for a and b are %d and %d",a,b);
}