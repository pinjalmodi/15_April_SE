#include<stdio.h>
int main(){
	int a[5]={100,201,302,403,504},i;
	float b[5];
	
	printf("\n Enter 5 float values");
	for(i=0;i<5;i++){
		scanf("\n %f", &b[i]);
	}
	for(i=0;i<5;i++){
		printf("\n %.1f",b[i]);
	}
}