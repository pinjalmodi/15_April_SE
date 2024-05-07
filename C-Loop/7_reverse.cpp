#include<stdio.h>
int main(){
	int n;
	int x,r,sum=0,y;
	printf("Enter number");
	scanf("%d",&n);
	for(x=n;x!=0;x=x/10){
		r=x%10;
		sum=sum*10 + r;
}
 	printf("%d",sum);
}