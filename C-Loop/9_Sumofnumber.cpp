#include<stdio.h>
int main(){
	int x,i,r,sum=0;
	printf("Enter a number");
	scanf("%d",&x);
	for(i=x;i!=0;i=i/10){
		r=i%10;
		sum=sum+r;
	}
	printf("Sum is %d",sum);
}