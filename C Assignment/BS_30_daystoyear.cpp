#include<stdio.h>
int main(){
	int d,days;
	float y,years;
	printf("Enter year to convert into days\n");
	scanf("%f",&y);
	days=(float)y*365;
	printf("days are %d\n",days);
	printf("Enter days to convert into years\n");
	scanf("%d",&d);
	years=(float)days/365;
	printf("Years are %.2f\n",years);
	}