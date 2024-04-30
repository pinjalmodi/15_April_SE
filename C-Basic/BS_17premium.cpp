#include<stdio.h>
int main(){
	int salary,premium,percent;
	printf("Enter Salary\n");
	scanf("%d",&salary);
	printf("Enter percentage\n");
	scanf("%d",&percent);
	premium=(salary*percent)/100;
	printf("You'll have to pay %d premium",premium);
}