#include<stdio.h>
int main(){
	int num,i=1,n;
	printf("Enter Number to iterate loop");
	scanf("%d",&num);
	printf("Enter Number to divide");
	scanf("%d",&n);
	while(i<=num){
		if(i%n==0){
		printf("%d",i);	
		}
		i++;
	}
}