#include<stdio.h>
int main(){
	int n,i,x,y=0;
	printf("Enter a num");
	scanf("%d",&n);
	x=n;
	do{
	i=n%10;
	y=y*10+i;
	n=n/10;
	}
	while(n>0);	
	printf("Rev is %d",y);
	
}