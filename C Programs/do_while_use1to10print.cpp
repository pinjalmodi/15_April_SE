#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter value to print number till");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
	printf("\n");
}