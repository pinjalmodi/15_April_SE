#include<stdio.h>
int main(){
	int num,ld,fd,sum=0;
	printf("Enter num");
	scanf("%d",&num);
	ld=num%10;
	while(num>=10){
		num=num/10;
	}
	
	sum=ld+num;
	printf("Sum of first and last digit is %d",sum);
}