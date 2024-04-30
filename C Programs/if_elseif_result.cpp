#include<stdio.h>
int main(){
	float per;
	printf("\n Enter percentage");
	scanf("%f",&per);
	if (per>=75 && per<=100){
		printf("Distinction");
	}
	else if (per>=60 && per<75){
		printf("First Class");
	}
	else if (per>=50 && per<60){
		printf("Second Class");
		
	}
	else if (per>=35 && per<50){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
}