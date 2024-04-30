#include<stdio.h>
int main(){
	int m,n;
	printf("Enter value of m");
	scanf("%d",&m);
	if(m>0){
		printf("Value for n is 1");
	}
	else if (m==0){
		printf("Value for n is 0");	
	}
	else if(m<0){
		printf("Value for n is -1");
	}
}