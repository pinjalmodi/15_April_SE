#include<stdio.h>
int main(){
	int marks;
	printf("Enter marks");
	scanf("%d",&marks);
	if(marks>=35 && marks <= 100){
		printf("Pass");
	}
	else if (marks>100){
		printf("Enter valid marks");
	}
	else{
		printf("Fail");
	}
}