#include<stdio.h>
int main(){
	int n,x,r,max;
	printf("Enter a number");
	scanf("%d",&n);
	for(x=n;x!=0;x=x/10){
		r=x%10;
	}
	if(r<x){
		x=r;
	}
	
		printf("%d is max",x);
	}
	
