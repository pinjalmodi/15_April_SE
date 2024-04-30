#include<stdio.h>
int main(){
	int x=1,sum=0,n;
	float avg;
	while(x<=5){
	printf("Enter new value");
	scanf("%d",&n);
	sum=sum+n;
	x++;
}
	printf("Sum of 5 numbers is %d",sum);
	avg=sum/5;
	printf("Avg is %f",avg);
	
	
}