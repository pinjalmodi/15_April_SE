#include<stdio.h>
int main(){
	int x,y,fact=1;
	printf("Enter number for its factorial\n");
	scanf("%d",&x);
	for(y=x;y>=1;y--){
		fact=fact*y;
	}
	printf("%d",fact);
}