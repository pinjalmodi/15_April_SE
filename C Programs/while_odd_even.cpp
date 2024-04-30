#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter value to iterate loop");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			printf("%d is even",i);
		}
		else{
			printf("%d is odd",i);
		}
		i++;
	}
}