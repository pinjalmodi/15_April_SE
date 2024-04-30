#include<stdio.h>
#include<math.h>
int main(){
	int num,z=0,n;
	float r;
	printf("Enter a number");
	scanf("%d",&num);
	n=num;
	while(n>0){
		r=n%10;
		z=z+(r*r*r);
		n=n/10;
	}
	if(z==num){
	printf("Armstrong number is");
	}
	else{
		printf("Not an armstrong number");
	}
	
}
