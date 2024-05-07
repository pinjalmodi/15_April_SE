#include<stdio.h>
int factrl(int x,int n,int mul);
int main(){
int x,n,z,mul=1;
printf("Enter n");
scanf("%d",&n);
factrl(x,n);
printf("Factorial is %d",mul);
}

int factrl(int x,int n,int mul){
	for(x=n;x>=1;x--){
		mul=mul*x;
}
		return mul;
		
}
