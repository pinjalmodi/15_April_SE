#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter number to iterate loop");
	scanf("%d",&n);
	while(i<=n){
		printf("%d",i);
		i++;
	}
}