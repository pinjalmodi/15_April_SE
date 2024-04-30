#include<stdio.h>
int main(){
	int value1,value2,add,sub,mul,mod;
	float div;
	printf("Enter value1\n");
	scanf("%d",&value1);
	printf("Enter value2\n");
	scanf("%d",&value2);
	add= value1+value2;
	sub= value1-value2;
	mul= value1*value2;
	div= value1/value2;
	mod= value1%value2;
printf ("%d,%d,%d,%.2f,%d",add,sub,mul,div,mod);
}