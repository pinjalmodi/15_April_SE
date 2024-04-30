#include<stdio.h>
int main(){
	int km,meter;
	printf("Enter kms");
	scanf("%d",&km);
	meter=km*1000;
	printf("%d kms = %d meters",km,meter);
}