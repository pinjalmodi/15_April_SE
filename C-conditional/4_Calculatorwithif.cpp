#include<stdio.h>
int main(){
	int a,b;
	char n;
	printf("Enter value for a\n");
	scanf("%d",&a);
	printf("Enter value for b\n");
	scanf("%d",&b);
	printf("Enter arithmetic operation user wish to perform");
	scanf(" %c",&n);
	if(n=='+'){
	printf("Sum of %d and %d is %d",a,b,a+b);	
}
else if(n=='-'){
	printf("Sub of %d and %d is %d",a,b,a-b);
}
else if(n=='*'){
	printf("mul of %d and %d is %d",a,b,a*b);
}
else if(n=='/'){
	printf("div of %d and %d is %0.2f",a,b,(float)a/b);
}
else if(n=='%'){
	printf("mod of %d and %d is %d",a,b,a%b);
}
}