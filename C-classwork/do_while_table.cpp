#include<stdio.h>
int main(){
	int n,y=1 ;
	printf("Enter number which table user wish to print");
	scanf("%d",&n);
	do{
		printf("%d * %d = %d\n",n,y,n*y);
		y++;
	}
	while(y<=10);
	printf("\n");
}