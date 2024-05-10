#include<stdio.h>
int main(){
	int num,ld,fd,sum=0;
	printf("Enter num");
	scanf("%d",&num);
	ld=num%10;
	do{
		fd=num/10;
	}
	while(fd>0);{
	num=fd;
	}
	
	sum=ld+num;
	printf("%d",sum);
}