#include<stdio.h>
int main(){
	int x;
	printf("\n Enter x \n");
	scanf("%d",&x);
	if(x%2==0){
		printf("%d is even number",x);
	}
	else{
		printf("%d is odd number",x);
	}
}