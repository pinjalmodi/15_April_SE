#include<stdio.h>
int main(){
	float y;
	int m,d;
	printf ("Enter Years");
	scanf("%f",&y);
	m=y*12;
	d=y*365;
	printf("Months for %0.2f years are %d\n",y,m);
	printf("Days for %0.2f years are %d\n",y,d);
	
}