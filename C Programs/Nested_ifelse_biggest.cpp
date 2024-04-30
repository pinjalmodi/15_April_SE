#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 values");
	scanf("%d %d %d", &a,&b,&c);
	if (a>b){
		if(a>c){
			printf("\n %d is the biggest",a);
		}
	}else if(b>c){
		printf("\n %d is the biggest",b);
		
	}
	else{
		printf("\n %d is the biggest",c);
	}
}