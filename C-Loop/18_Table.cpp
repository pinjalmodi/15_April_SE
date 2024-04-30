#include<stdio.h>
int main(){
	int t,mul,i=1;
	printf("Enter table you want to print");
	scanf("%d",&t);
	while(i<=10){
		mul=t*i;
		printf("%d*%d=%d\n",t,i,mul);
		i++;
	}
	
	
}