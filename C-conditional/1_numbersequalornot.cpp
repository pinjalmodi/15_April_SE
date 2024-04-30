#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter number x");
	scanf("%d",&x);
	printf("Enter number y");
	scanf("%d",&y);
	if(x==y){
		printf("Number %d and %d are equal",x,y);
	}
	else {
		printf("Numbers %d and %d are not equal",x,y);
	}
}