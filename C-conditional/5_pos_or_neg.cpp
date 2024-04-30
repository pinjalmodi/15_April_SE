#include<stdio.h>
int main(){
	int x;
	printf("Enter number x");
	scanf("%d",&x);
	if(x>=1){
		printf("%d is positive",x);
	}
	else if(x==0){
		printf("%d is neither positive nor negative",x);
	}
	else {
		printf("%d is negative",x);
	}
}