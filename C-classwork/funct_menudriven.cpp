#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);

int main(){
	int a,b,n;
	char x;
	do{
	
	printf("\n 1. Add");
	printf("\n 2. Sub");
	printf("\n 3. Mul");
	printf("\n 4. Div");
	printf("\n 5. Mod");
	
	printf("\nEnter value for a\n");
	scanf("%d",&a);
	printf("\nEnter value for b\n");
	scanf("%d",&b);
printf("Enter number\n");
scanf("%d",&n);	
	switch(n){
		case 1:
			printf("Sum is %d",add(a,b));
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
		case 5:
			printf("Mod is %d",mod(a,b));
			break;
		default:
			printf("\n Wrong choice");
			break;		
	}
	printf("\nDo you wanr to continue? ..y/n");
	scanf(" %c",&x);
}
while(x=='y');
printf("\n thank you bye bye");
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
int mod(int a,int b){
	return a%b;
}
