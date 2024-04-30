#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter values of a and b\n");
	scanf("%d %d", &a,&b);
c=a;
a=b;
b=c;
printf("\n swapped values of a is %d and b is %d",a,b);
}
