#include<stdio.h>
int main(){
	int x,i,sum=0,y,r;
	printf("Enter a number");
	scanf("%d",&x);
for(i=x;i!=0;i=i/10){
	r=i%10;
	y=r*r*r;
	sum=sum+y;
}
if(sum==x){
	printf("Armstrong Number");
	
}
else{
	printf("Not an armstrong Number");
}
}

