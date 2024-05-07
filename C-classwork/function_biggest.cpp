#include<stdio.h>
int biggest(int a,int b);
void odd_or_even(int n);
int main(){
int a,b,c,n;
printf("Enter value for a");
scanf("%d",&a);
printf("Enter value for b");
scanf("%d",&b);
c = biggest (a,b);
printf("Biggest value is %d",c);

printf("\nEnter number");
scanf("%d",&n);
odd_or_even(n);
}
int biggest(int a,int b){

if(a>b){
	return a;
}
else {
	return b;
}
}

void odd_or_even(int n){
	if(n%2==0){
		printf("Number is even");
	}
	else{
		printf("Number is odd");
	}
}