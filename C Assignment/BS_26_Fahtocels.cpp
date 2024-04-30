#include<stdio.h>
int main(){
	int c,f;
	printf("Enter temperature in fahrenheit");
	scanf("%d",&f);
	c= ( f-32 ) * 5/9;
	printf("Temperature in celsius is %d",c);	
}