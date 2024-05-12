#include<stdio.h>
int main(){
	int n[5],i,sum=0;
	printf("Enter 5 numbers");
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++){
	sum=sum+n[i];
}

		printf("Sum of numbers is %d\n",sum);
	
	
}