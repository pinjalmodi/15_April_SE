#include<stdio.h>
int main(){
	int age;
	printf("\n Enter your age");
	scanf("%d",&age);
	if(age>=18){
		printf("\n You are eligible to vote");
		}else{
		
		printf("\n You are not eligible to vote");
		printf("\n You have %d years left to vote",18-age);
	}
}