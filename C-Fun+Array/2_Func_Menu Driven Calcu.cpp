#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main(){
	int a,b,x;
	char z;
	do
	{
	
	printf("Enter a\n");
	scanf("%d",&a);
	printf("Enter b\n");
	scanf("%d",&b);
	
	printf("\nEnter 1 for Add");
	printf("\nEnter 2 for Sub");
	printf("\nEnter 3 for Mul");
	printf("\nEnter 4 for Div");
	
	printf("\nEnter from 1 to 4\n");
	scanf("%d",&x);
	

switch(x){
	
	case 1:
		printf("Addition  is %d",add(a,b));
		break;
	case 2:
		printf("Sub is %d",sub(a,b));
		break;
	case 3:
		printf("Mul is %d",mul(a,b));
		break;
	case 4:
		printf("Div is %d",div(a,b));
		break;
	default:
		printf("Wrong Entry");
		break; 
		
}

printf("\nContinue ? y/n");
scanf(" %c",&z);
}
while(z=='y');

}
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
