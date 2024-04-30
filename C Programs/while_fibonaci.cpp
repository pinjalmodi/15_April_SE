#include<stdio.h>
int main(){
	int a=0,b=1,c,limit,sum=0;
	printf("Enter max limit");
	scanf("%d",&limit);
	while(sum<limit){
		sum=a+b;
		a=b;
		b=sum;
		printf("%d\n",a);
	}
	
}