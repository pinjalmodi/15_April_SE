#include<stdio.h>
int main(){
	int x[5],i;
	printf("Enter Values for x");
	for(i=0;i<5;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++){
		printf("%d",x[i]);
	}
	for(i=0;i<5;i++){
	if((x[i])%2==0){
		printf("\n%d Even",x[i]);
	}
	else{
		printf("\n%d Odd",x[i]);
	}
}
}