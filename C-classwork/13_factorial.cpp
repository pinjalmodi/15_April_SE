//4!
//1*2*3*4
#include<stdio.h>
int main(){
	int n,i=1,x=1,y;
	printf("Enter a number to find factorial");
	scanf("%d",&n);
	while(n>=i){
		x=x*i;
		i++;
		printf("%d\n",x);
}
}