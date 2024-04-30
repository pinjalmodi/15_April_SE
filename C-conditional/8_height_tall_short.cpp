#include<stdio.h>
int main(){
	float h;
	printf("Enter height in centimeter");
	scanf("%f",&h);
	if(h>=182){
		printf("Category : Tall");
	}
	else if(h>=167 && h<182){
		printf("Category : Average");
	}
	else{
		printf("Category : Short");
	}
}