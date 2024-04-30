#include<stdio.h>
int main(){
	int m,s,h;
	printf("Enter minutes");
	scanf("%d",&m);
	s=m*60;
	h=m/60;
	printf("Seconds are %d\n",s);
	printf("hours are %d\n",h);
}