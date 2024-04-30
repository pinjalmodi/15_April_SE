#include<stdio.h>
int main(){
	int p,r,n,t;
	float ci,a;
	printf("Enter Principal,rateofinterest,time");
	scanf("%d %d %d",&p,&r,&t);
	a=p*(1+r/100)*t;
		printf("Compond interest is %f",a);
	ci=a-p;
	printf("Compond interest is %f",ci);
}